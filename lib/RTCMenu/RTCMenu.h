#ifndef RTCMENU_H
#define RTCMENU_H

#include <Arduino.h>
#include <RTClib.h>
#include <Menu.h>

class RTCMenu : public Menu
{
private:
  RTC_DS1307 * clock;
public: 
  RTCMenu(RTC_DS1307 *__clock  ,String *__menu_options, unsigned int __menu_size);
};

#endif