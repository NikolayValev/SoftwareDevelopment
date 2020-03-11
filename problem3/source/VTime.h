#pragma once
#include <string>
using namespace std;

class VTime {
public:
  // Constructor for this class.  We allow the user to initially set the stime
  // or it will be set to zero.
  VTime(int a_hours = 0, int a_minutes = 0, int a_seconds = 0) {
    setHours(a_hours);
    setMinutes(a_minutes);
    setSeconds(a_seconds);
  }
  // Accessor functions.
  inline int getHours() { return m_time / 3600; }
  inline int getMinutes() { return (m_time - getHours() * 3600) / 60; }
  inline int getSeconds() { return m_time % 60; }
  inline void setHours(int a_hours) {
    m_time = (m_time - getHours() * 3600) + a_hours * 3600;
  }
  inline void setMinutes(int a_minutes) {
    m_time = (m_time - getMinutes() * 60) + a_minutes * 60;
  }
  inline void setSeconds(int a_seconds) {
    m_time = m_time - getSeconds() + a_seconds;
  }
  // A function to add a specified number of seconds to the time.
  inline void addSeconds(int a_seconds) { m_time += a_seconds; }
  // A function to remove a specified number of seconds from the time.
  // inline void removeSeconds(int a_seconds) { m_time -= a_seconds; }
  // Plus operator to add seconds onto the time.
  VTime operator+(int a_seconds);
  // Minus operator to remove seconds from the time.
  inline int operator-(VTime input) { return abs(m_time - input.m_time); }
  // Gets the time as an ASCII string.
  string getASCIITime();
  // Sets the time to now
  void setCurrentTime();

private:
  int m_time;
};