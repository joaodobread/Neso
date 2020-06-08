#include <Arduino.h>

#include <Menu.h>
#include <RTCMenu.h>
#include <RTClock.h>

RTC_DS1307 *clk = new RTC_DS1307();

void setup() {
  // put your setup code here, to run once:
  RTClock *r = new RTClock();
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}