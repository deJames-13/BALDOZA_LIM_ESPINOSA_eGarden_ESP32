
#ifndef CONFIG_H
#define CONFIG_H

// ##########################################################################
// PIN CONFIGURATION
// ##########################################################################

// SENSORS
#define DHTTYPE DHT11
#define DHT_PIN 13
#define SOIL_MOISTURE_PIN 32
#define WATER_LEVEL_PIN 39
// OUTPUTS
#define OLED_SDA 21 // GPIO 21 - SDA
#define OLED_SCL 22 // GPIO 22 - SCL
#define BUZZER_PIN 26
#define RELAY_PIN_VALVE 33
#define RELAY_PIN_FAN1 25
// #define RELAY_PIN_FAN2 25

// Moisture Threshold values
#define DRY_THRESHOLD 2000 // FIXME:  Adjust as needed
#define WET_THRESHOLD 1000 // FIXME:  Adjust as needed
// Water Threshold values
#define LOW_THRESHOLD 100    // FIXME:  Adjust as needed
#define MEDIUM_THRESHOLD 300 // FIXME:  Adjust as needed
#define HIGH_THRESHOLD 600   // FIXME:  Adjust as needed
// ##########################################################################

// ##########################################################################
// WIFI CONFIGURATION
// ##########################################################################
// Replace "YourSSID" and "YourPassword" with your actual Wi-Fi credentials
#define WIFI_SSID "donkie"
#define WIFI_PASSWORD "12345678"
// ##########################################################################

#endif

// ##########################################################################
// DB CONFIGURATION
// ##########################################################################
// #include <IPAddress.h>
// const IPAddress DB_HOST(127, 0, 0, 1); // FIXME: Change to HOST IP
// #define DB_USER "root"
// #define DB_PASSWORD
// #define DB_PORT 3306
// #define DB_NAME 'egarden_db'
// ##########################################################################
