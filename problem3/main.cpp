#include "VTime.h"
#include <iostream>

using namespace std;
int main() {
  VTime myTime;
  VTime test(12, 15, 15);
  myTime.setCurrentTime();
  cout << "TIME NOW " << myTime.getASCIITime() << endl;
  cout << "TIME TEST " << test.getASCIITime() << endl;
  cout << "Difference in the two " << myTime - test << endl;
  return 0;
}