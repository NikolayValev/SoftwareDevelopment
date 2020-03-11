/*
Enhance the time class by adding an operator "-" to find the difference between
two times (returns an integer number of seconds) and a member function to set
the time to now.  This second function might take a little research.  Also,
replace the three variables to hold the time with one that holds the number of
seconds since midnight.  This should also be done without harming any program
that previously used the time class.
*/
#include "VTime.h"
#include <iostream>
#include <time.h>

using namespace std;
VTime VTime::operator+(int a_seconds) {
  VTime tmp(getHours(), getMinutes(), getSeconds());
  tmp.addSeconds(a_seconds);
  return tmp;
}
string VTime::getASCIITime() {
  char buff[128];
  sprintf(buff, "%2.2d:%2.2d:%2.2d", getHours(), getMinutes(), getSeconds());

  return buff;
}
void VTime::setCurrentTime() {
  time_t rawtime;
  struct tm *timeinfo;
  time(&rawtime);
  timeinfo = localtime(&rawtime);
  m_time =
      (timeinfo->tm_hour * 3600 + timeinfo->tm_min * 60 + timeinfo->tm_sec);
}