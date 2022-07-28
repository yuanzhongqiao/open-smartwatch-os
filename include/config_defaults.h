#ifndef CONFIG_DEFAULTS_H
#define CONFIG_DEFAULTS_H

/*
 * Do not edit this file. You can add a config.h (cp config.h.example config.h)
 * and change the values there.
 */
#if __has_include("config.h")
#include "config.h"
#endif

/*
 * Internals:
 * You can ignore these ;).
 */

#ifndef DISP_W
#define DISP_W 240
#endif
#ifndef DISP_H
#define DISP_H 240
#endif

// !! IMPORTANT: DISP_H must be divisble by DISP_CHUNK_H !!
#ifndef DISP_CHUNK_H
#define DISP_CHUNK_H 8
#endif

/*
 * Language:
 * Here you can select the language of the compiled os. By compiling the language directly
 * into the os you loose the ability to switch it later on, but the compiled binary is way
 * smaller (and faster)!
 */
#ifndef LOCALE
#include "locales/en-US.h"
#else
#include LOCALE
#endif

/*
 * OSW Config Values (see osw_config_keys.cpp for description). All these values can be configured at run time with the
 * config app.
 */

#ifndef DEVICE_NAME
#define DEVICE_NAME "MyOSW"
#endif

// BLE device name is derived form DEVICE_NAME, unless you want to change this
#ifndef BLE_DEVICE_NAME
#define BLE_DEVICE_NAME DEVICE_NAME
#endif

#ifndef WIFI_ON_BOOT
#define WIFI_ON_BOOT false
#endif

#ifndef NTP_ALWAYS_ON_WIFI
#define NTP_ALWAYS_ON_WIFI true
#endif

#ifndef WIFI_AUTO_AP
#define WIFI_AUTO_AP true
#endif

// PLEASE CONFIGURE THE VALUES BELOW TO YOUR PREFERENCES
#ifndef CONFIG_WIFI_SSID
#define CONFIG_WIFI_SSID "open-smartwatch"
#endif
#ifndef CONFIG_WIFI_PASS
#define CONFIG_WIFI_PASS "P4ssw0rd!"
#endif
#ifndef CONFIG_FALLBACK_1ST_WIFI_SSID
#define CONFIG_FALLBACK_1ST_WIFI_SSID ""
#endif
#ifndef CONFIG_FALLBACK_1ST_WIFI_PASS
#define CONFIG_FALLBACK_1ST_WIFI_PASS ""
#endif
#ifndef CONFIG_FALLBACK_2ND_WIFI_SSID
#define CONFIG_FALLBACK_2ND_WIFI_SSID ""
#endif
#ifndef CONFIG_FALLBACK_2ND_WIFI_PASS
#define CONFIG_FALLBACK_2ND_WIFI_PASS ""
#endif

#ifndef DISPLAY_BRIGHTNESS
// DISPLAY_MIN_BRIGHTNESS - 255
#define DISPLAY_BRIGHTNESS 128
#endif

#ifndef DISPLAY_MIN_BRIGHTNESS
// avoids turning off the display by accident. better leave as is ;)
#define DISPLAY_MIN_BRIGHTNESS 10
#endif

#ifndef DISPLAY_TIMEOUT
#define DISPLAY_TIMEOUT 10
#endif

#ifndef DISPLAY_OVERLAYS
#define DISPLAY_OVERLAYS true
#endif

#ifndef DISPLAY_OVERLAYS_ON_WF
#define DISPLAY_OVERLAYS_ON_WF false
#endif

#ifndef WAKE_FROM_RAISE
#define WAKE_FROM_RAISE false
#endif

#ifndef WAKE_FROM_RAISE_SENSITIVITY
#define WAKE_FROM_RAISE_SENSITIVITY 127
#endif

#ifndef WAKE_FROM_TAP
#define WAKE_FROM_TAP true
#endif

#ifndef WAKE_FROM_BTN1
#define WAKE_FROM_BTN1 false
#endif

#ifndef DO_LIGHT_SLEEP
#define DO_LIGHT_SLEEP false
#endif

#ifndef THEME_BACKROUND_COLOR
#define THEME_BACKROUND_COLOR rgb888(0, 0, 0)
#endif
#ifndef THEME_BACKROUND_DIMMED_COLOR
#define THEME_BACKROUND_DIMMED_COLOR rgb888(64, 64, 64)
#endif
#ifndef THEME_FOREGROUND_COLOR
#define THEME_FOREGROUND_COLOR rgb888(255, 255, 255)
#endif
#ifndef THEME_FOREGROUND_DIMMED_COLOR
#define THEME_FOREGROUND_DIMMED_COLOR rgb888(122, 122, 122)
#endif
#ifndef THEME_PRIMARY_COLOR
#define THEME_PRIMARY_COLOR rgb888(0, 209, 178)
#endif
#ifndef THEME_INFO_COLOR
#define THEME_INFO_COLOR rgb888(32, 156, 238)
#endif
#ifndef THEME_SUCCESS_COLOR
#define THEME_SUCCESS_COLOR rgb888(72, 199, 116)
#endif
#ifndef THEME_WARNING_COLOR
#define THEME_WARNING_COLOR rgb888(255, 221, 87)
#endif
#ifndef THEME_DANGER_COLOR
#define THEME_DANGER_COLOR rgb888(255, 56, 96)
#endif

// Set the long press time to switch between apps.
#ifndef APPSWITCHER_LONG_PRESS
#define APPSWITCHER_LONG_PRESS 800
#endif

// Hold it that much longer to send the watch to sleep...
#ifndef APPSWITCHER_SLEEP_TIMEOUT
#define APPSWITCHER_SLEEP_TIMEOUT 1000
#endif

// The following settings are configureable later on using the web ui, you can still set the defaults here.

#ifndef CONFIG_DATE_FORMAT
// possibilities: "yyyy.mm.dd" or "mm/dd/yyyy"
#define CONFIG_DATE_FORMAT "mm/dd/yyyy"
#endif

// Daylight saving time offset in hours. E.g. 0.5 = 30 min
#ifndef CONFIG_DAYLIGHTOFFSET
#define CONFIG_DAYLIGHTOFFSET 0
#endif

// Timezone offset from GMT in hours. E.g. 10 = +10:00
#ifndef CONFIG_TIMEZONE
#define CONFIG_TIMEZONE 1
#endif

// Set the initial value for the watchface to the index below - make sure to only use a valid index!
#ifndef CONFIG_DEFAULT_WATCHFACE_INDEX
#define CONFIG_DEFAULT_WATCHFACE_INDEX 0
#endif

#ifndef STEPS_PER_DAY
#define STEPS_PER_DAY 10000
#endif

#ifndef STEPS_HISTORY_CLEAR
#define STEPS_HISTORY_CLEAR false
#endif

/*
 * Apps:
 */
#ifndef GAME_SNAKE
#define GAME_SNAKE 0
#endif
#ifndef GAME_BRICK_BREAKER
#define GAME_BRICK_BREAKER 0
#endif
#ifndef TOOL_STOPWATCH
#define TOOL_STOPWATCH 1
#endif
#ifndef TOOL_STOPWATCH_BTN_TIMEOUT
#define TOOL_STOPWATCH_BTN_TIMEOUT 1800
#endif
#ifndef TOOL_WATERLEVEL
#define TOOL_WATERLEVEL 1
#endif

/*
 * Experimentals/Services:
 */

// Experimentals (1 = enable, 0 = disable):
#ifndef SERVICE_BLE_COMPANION
#define SERVICE_BLE_COMPANION 0
#endif

#ifndef MINI_IOT_DEVICENAME
#define MINI_IOT_DEVICENAME "yourDeviceName"
#endif
#ifndef MINI_IOT_SERVER
#define MINI_IOT_SERVER "yourMiniIotServerIp:port"
#endif
#endif