#pragma once
#define PIN_IMU_CS 17
#define PIN_ANALOG_BATTERY_VOLTAGE 27
#define PIN_ANALOG_CHARGE_VOLTAGE 26
#define PIN_ANALOG_CHARGE_CURRENT 28

#define PIN_ENABLE_CHARGE 22

#define PIN_ESC_SHUTDOWN 20
#define PIN_RASPI_POWER 21

#define PIN_EMERGENCY_1 7
#define PIN_EMERGENCY_2 6
#define PIN_EMERGENCY_3 3
#define PIN_EMERGENCY_4 2

#define PIN_MUX_IN 11
#define PIN_MUX_OUT 12
#define PIN_MUX_ADDRESS_0 13
#define PIN_MUX_ADDRESS_1 14
#define PIN_MUX_ADDRESS_2 15

#define PIN_NEOPIXEL 10

#define PIN_UI_TX 4
#define PIN_UI_RX 5

#ifdef ENABLE_SOUND_MODULE
#define PIN_SOUND_TX 8
#define PIN_SOUND_RX 9
#endif

//This is used as a hack to use WT901 on older mainboards.
#ifdef WT901_INSTEAD_OF_SOUND
#ifdef ENABLE_SOUND_MODULE
#error you can not enable sound and have wt901 on sound port at the same time.
#endif
#define PIN_WT901_TX 8
#define PIN_WT901_RX 9
#endif