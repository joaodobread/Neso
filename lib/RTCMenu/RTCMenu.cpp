#include <RTCMenu.h>

RTCMenu::RTCMenu(RTC_DS1307 *__clock, String *__menu_options, unsigned int __menu_size) : clock(__clock), Menu(__menu_options, __menu_size)
{
}