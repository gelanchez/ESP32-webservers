/**
 * @file constants-TEMPLATE.h
 * @author José Ángel Sánchez (https://github.com/gelanchez)
 * @brief File to be renamed as constants.h, setting the SSID and PASSWORD.
 * @version 0.0.1
 * @date 2020-09-06
 * @copyright GPL-3.0
 */

#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <WiFi.h>

namespace Constants
{
    // LED
    const uint8_t ledPin(4);  // Connected through a resistance.

    // WiFI parameters (TO BE MODIFIED)
    const char ssid[] = "SSID";
    const char password[] = "PASSWORD";
    const IPAddress ip(192, 168, 0, 190);
    const IPAddress gateway(192, 168, 0, 1);
    const IPAddress subnet(255, 255, 255, 0); 
}

#endif