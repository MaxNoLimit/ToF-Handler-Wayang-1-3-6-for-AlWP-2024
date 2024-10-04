#include "mainheader.hpp"

bool _run = false;
int _whatSensor;
String _valueString_1, _valueString_3, _valueString_6;

void setup()
{
  // Begining Serial comm
  Serial.begin(9600);

  // Setting up the XSHUT pins
  pinMode(XSHUT_1, OUTPUT);
  pinMode(XSHUT_3, OUTPUT);
  pinMode(XSHUT_6, OUTPUT);

  // Begining I2C comm
  Wire.begin();
  Wire.setTimeout(500);
}

void loop()
{
  // Serial.flush();
  if (_run)
  {
    _run = false;
    switch (_whatSensor)
    {
    case 1:
      _valueString_1 = String(getDistance1());
      Serial.write(_valueString_1.c_str());
      break;

    case 3:
      _valueString_3 = String(getDistance3());
      Serial.write(_valueString_3.c_str());
      break;

    case 6:
      _valueString_6 = String(getDistance6());
      Serial.write(_valueString_6.c_str());
      break;
    }
  }
  else
  {
    switch (Serial.read())
    {
    case REQUEST_DISTANCE_1:
      _run = true;
      _whatSensor = 1;
      break;

    case REQUEST_DISTANCE_3:
      _run = true;
      _whatSensor = 3;
      break;

    case REQUEST_DISTANCE_6:
      _run = true;
      _whatSensor = 6;
      break;
    }
  }
}