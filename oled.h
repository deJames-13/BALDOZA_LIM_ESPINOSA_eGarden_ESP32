#ifndef OLED_H
#define OLED_H

#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
#include <Wire.h>
#include <Fonts/FreeMonoBold9pt7b.h>
#include <Fonts/FreeMono9pt7b.h>
#include "dht_sensor.h"
#include "soil_moisture.h"
#include "water_level.h"

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define WIRE Wire

#define OLED_RESET -1       // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C ///< See datasheet for Address; 0x3D for 128x64, 0x3C for 128x32

class OLED
{
public:
    OLED();
    void begin();
    void clearDisplay();
    void updateDisplay();
    void displayDHT(float temperature, int humidity);
    void displayMoisture(int moisture);
    void displayWater(int waterValue, String waterLevel);
    void displayText(String text);

private:
    Adafruit_SSD1306 display;
};

#endif
