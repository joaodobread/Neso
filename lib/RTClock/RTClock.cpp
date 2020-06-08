#include <RTClock.h>


RTClock::RTClock()
{
  return;
  this->clock = new RTC_DS1307();

  if (!clock->begin())
  {
    Serial.println("Occurred an error on clock start!");
    Serial.flush();
    while (1)
      ;
  }

  if (!clock->isrunning())
  {
    Serial.println("RTC is not running, setting clock");
    // When time needs to be set on a new device, or after a power loss, the
    // following line sets the RTC to the date & time this sketch was compiled
    this->clock->adjust(DateTime(F(__DATE__), F(__TIME__)));
  }
}

void RTClock::settingClockTime(int __year, int __month, int __day, int __hour, int __minutes)
{
  // TODO change the static time to rotary encoder dynamic time selection
  this->clock->adjust(DateTime(__year, __month, __day, __hour, __minutes, 0));
}

DateTime RTClock::getTime() {
  return this->clock->now();
}

int RTClock::getNumberOfDaysInMonth(int __month, int __year) {
  if (__month == 2) {

  }
  // If the number of month is not odd have 30 days otherwise 31
  return (!(__month  % 2)) ? 30 : 31;

}