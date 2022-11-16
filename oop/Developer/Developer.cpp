//Developer.cpp

#include "Employee.h"
#include "Developer.h"
#include <iostream>

int main(){

  Developer d = Developer("Justin", "CERN", 24, "C++ & Python");
  d.details();
  d.getName();
  d.AskForPromotion();
  
  return 0;
}
