#ifndef EMON_CLASS
#define EMON_CLASS

#include "BaseClass.h"
#include "MethodDescriptor.h"

class EnergyMonitor;

namespace nanpy {
    class EmonClass: public ObjectsManager<EnergyMonitor> {
        public:
            void elaborate( nanpy::MethodDescriptor* m );
            const char* get_firmware_id();
    };
}


#endif 
