#include <Adafruit_ADS1015.h>

class Moisture
{
    private:
        Adafruit_ADS1015 & AD;
        byte channel = 0;
        bool _present = false;
    public:
        Moisture(Adafruit_ADS1015 & ad) : AD(ad){};
        bool Init();
        bool IsPresent();
        uint16_t Value();
};
