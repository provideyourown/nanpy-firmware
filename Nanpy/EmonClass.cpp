#include "cfg_all.h"

#if USE_EnergyMonitor


#include <Arduino.h>
#include <EnergyMonitor.h>
#include "EmonClass.h"
#include <stdlib.h>

const char* nanpy::EmonClass::get_firmware_id()
{
    return "EnergyMonitor";
}

void nanpy::EmonClass::elaborate( MethodDescriptor* m ) {
    ObjectsManager<EnergyMonitor>::elaborate(m);

    if (strcmp(m->getName(),"new") == 0) {
      EnergyMonitor* emon;
      if (m->getNArgs() == 4) {
	emon = new EnergyMonitor (m->getInt(0), m->getDouble(1), m->getDouble(2), m->getDouble(3));
      } else {
	emon = new EnergyMonitor (m->getInt(0), m->getDouble(1), m->getDouble(2));
      }
      v.insert(emon);
      m->returns(v.getLastIndex());
    }

    if (strcmp(m->getName(), "readCurrent") == 0) {
      m->returns(v[m->getObjectId()]->readCurrent(m->getInt(0)));
    }
};



#endif 
