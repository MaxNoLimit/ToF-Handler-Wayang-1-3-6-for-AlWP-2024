#ifndef MAINHEADER_HPP
#define MAINHEADER_HPP

#include <Arduino.h>
#include <Wire.h>
#include <VL53L0X.h>

#define REQUEST_DISTANCE_1 0x31
#define REQUEST_DISTANCE_3 0x33
#define REQUEST_DISTANCE_6 0x36

#define VL53L0X_ADDRESS_1 0x20
#define VL53L0X_ADDRESS_3 0x21
#define VL53L0X_ADDRESS_6 0x22

#define XSHUT_1 2
#define XSHUT_3 3
#define XSHUT_6 4

void setupDistance1(); // Sita
int getDistance1(); 

void setupDistance3(); // Rama Wijaya
int getDistance3();

void setupDistance6(); // Sugriwa
int getDistance6(); 


#endif // MAINHEADER_HPP
