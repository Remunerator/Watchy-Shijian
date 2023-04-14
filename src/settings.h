#ifndef SETTINGS_H
#define SETTINGS_H

//NTP Settings
#define NTP_SERVER "pool.ntp.org"
#define GMT_OFFSET_SEC 3600 * 8 //New York is UTC -5 EST, -4 EDT, will be overwritten by weather data

watchySettings settings{
    .ntpServer = NTP_SERVER,
    .gmtOffset = GMT_OFFSET_SEC,
};

#endif