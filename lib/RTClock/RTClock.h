#ifndef RTCLOCK_H
#define RTCLOCK_H

#define START_YEAR

#include <RTClib.h>

static const String Months[12] = {
    "Jan",
    "Fev",
    "Mar",
    "Abr",
    "Mai",
    "Jun",
    "Jul",
    "Ago",
    "Set",
    "Out",
    "Nov",
    "Dez"};



static const int startYear = 2020;

class RTClock
{
private:
  RTC_DS1307 *clock;

public:
  RTClock();
  void settingClockTime(int __year, int __month, int __day, int __hour, int __minutes);
  DateTime getTime();

  int getNumberOfDaysInMonth(int __month, int __year);

};

#endif