#include "mainheader.hpp"

VL53L0X sensor1, sensor3, sensor6;

void setupDistance1()
{
    sensor1.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor1.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor1.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor1.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor1.setMeasurementTimingBudget(200000);
}

void setupDistance3()
{
    sensor3.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor3.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor3.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor3.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor3.setMeasurementTimingBudget(200000);
}

void setupDistance6()
{
    sensor6.init();
    // lower the return signal rate limit (default is 0.25 MCPS)
    sensor6.setSignalRateLimit(0.1);
    // increase laser pulse periods (defaults are 14 and 10 PCLKs)
    sensor6.setVcselPulsePeriod(VL53L0X::VcselPeriodPreRange, 18);
    sensor6.setVcselPulsePeriod(VL53L0X::VcselPeriodFinalRange, 14);

    sensor6.setMeasurementTimingBudget(200000);
}

int getDistance1()
{
    return sensor1.readRangeSingleMillimeters();
}

int getDistance3()
{
    return sensor3.readRangeSingleMillimeters();
}

int getDistance6()
{
    return sensor6.readRangeSingleMillimeters();
}