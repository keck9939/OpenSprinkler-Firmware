#include "Moisture.h"

bool Moisture::Init()
{
    AD.begin();
    Wire.beginTransmission(ADS1015_ADDRESS);
    byte stat = Wire.endTransmission();
    if (stat == 0)
    {
        _present = true;
        AD.setGain(GAIN_ONE);
    }   
    return _present;
}

bool Moisture::IsPresent()
{
    return _present;
}

uint16_t Moisture::Value()
{
    return AD.readADC_SingleEnded(channel);
}
