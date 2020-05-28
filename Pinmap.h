#ifndef Pinmap_h
#define Pinmap_h

#if defined(ARDUINO_TEENSY41)

#define DISPLAY_CS_PIN 10
#define DISPLAY_SDI_PIN 11
#define DISPLAY_SDO_PIN 12
#define DISPLAY_SCK_PIN 13
#define SX1509_SDA_PIN 18
#define SX1509_SCL_PIN 19
#define MCP23017_SDA_PIN 18
#define MCP23017_SLC_PIN 19
#define FEEDLINE_PUMP_PIN 25
#define FEEDLINE_END_DRAIN_VALVE_PIN 26
#define FEEDLINE_WATER_VALVE_PIN 27
#define FEEDLINE_MANIFOLD_DRAIN_VALVE_PIN 28
#define DETERGENT_1_VALVE_PIN 29
#define DETERGENT_2_VALVE_PIN 30
#define DETERGENT_3_VALVE_PIN 31
#define DETERGENT_4_VALVE_PIN 32
#define DETERGENT_1_FLOW_PIN 33
#define DETERGENT_2_FLOW_PIN 34
#define DETERGENT_3_FLOW_PIN 35
#define DETERGENT_4_FLOW_PIN 36
#define FEEDLINE_FLOW_PIN 37
#define DETERGENT_1_LEVEL_PIN 38
#define DETERGENT_2_LEVEL_PIN 39
#define DETERGENT_3_LEVEL_PIN 40
#define DETERGENT_4_LEVEL_PIN 41

#elif defined(ARDUINO_AM_AP3_SFE_BB_ARTEMIS_ATP)

#define DISPLAY_CS_PIN 
#define DISPLAY_SDI_PIN 
#define DISPLAY_SDO_PIN 
#define DISPLAY_SCK_PIN 
#define SX1509_SCL_PIN 
#define SX1509_SDA_PIN 
#define MCP23017_SDA_PIN 
#define MCP23017_SLC_PIN 
#define FEEDLINE_PUMP_PIN 14
#define FEEDLINE_END_DRAIN_VALVE_PIN 8
#define FEEDLINE_WATER_VALVE_PIN 10
#define FEEDLINE_MANIFOLD_DRAIN_VALVE_PIN 26
#define DETERGENT_1_VALVE_PIN 45
#define DETERGENT_2_VALVE_PIN 2
#define DETERGENT_3_VALVE_PIN 1
#define DETERGENT_4_VALVE_PIN 0
#define DETERGENT_1_FLOW_PIN 16
#define DETERGENT_2_FLOW_PIN 31
#define DETERGENT_3_FLOW_PIN 17
#define DETERGENT_4_FLOW_PIN 41
#define FEEDLINE_FLOW_PIN 9
#define DETERGENT_1_LEVEL_PIN 29
#define DETERGENT_2_LEVEL_PIN 11
#define DETERGENT_3_LEVEL_PIN 34
#define DETERGENT_4_LEVEL_PIN 33

#endif

#endif
