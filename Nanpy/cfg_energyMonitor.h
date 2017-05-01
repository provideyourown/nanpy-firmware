#pragma once

#define BAUDRATE 57600

// for the LinkIt, we must use Serial1
#define COMM_SERIAL				    Serial1

// info about existence of other features
#define USE_Info                                    1

// definitions: MCU type, frequency, Arduino version,
// EEPROM size, RAM size, pin count, build time,..
#define USE_Define                                  0

// low level mapping of pins and ports
#define USE_ArduinoCore                             1

// read, write RAM
#define USE_RAM                                     1

// read, write EEPROM
#define USE_EEPROM                                  0

// read, write AVR registers
#define USE_Register                                0

// watchdog and reset
#define USE_Watchdog                                0

#define USE_Tone                                    0

#define USE_LiquidCrystal                           1

// I2C
#define USE_Wire                                    0

#define USE_Servo                                   0

#define USE_Stepper                                 0

// frequency counter,  USE_Tone should be off!
#define USE_Counter                                 0

// external libraries should be installed for the following features:
#define USE_OneWire                                 0
#define USE_DallasTemperature                       1
#define USE_CapacitiveSensor                        0

// https://github.com/adafruit/DHT-sensor-library
#define USE_DHT                                     1

// https://bitbucket.org/fmalpartida/new-liquidcrystal
#define USE_LiquidCrystal_I2C                       0

// https://www.adafruit.com/products/1429
#define USE_TLC5947                                 0

// add emonlib support
#define USE_EnergyMonitor			    1

