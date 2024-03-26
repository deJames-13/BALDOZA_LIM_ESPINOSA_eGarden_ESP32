#ifndef INCLUDES_H
#define INCLUDES_H

// CONFIG FILES
#include "config.h"

// Include necessary libraries
#include <Arduino.h>
#include <SPI.h>
#include <WiFi.h>

// SENSORS
#include "dht_sensor.h"
#include "soil_moisture.h"
#include "water_level.h"

// OUTPUTS
#include "buzzer.h"
#include "fans.h"
#include "water_valve.h"

// DISPLAY
#include "oled.h"

// WEB SERVICE
#include "bluetooth_manager.h"
#include "web_server.h"
#include "network_manager.h"

#endif
