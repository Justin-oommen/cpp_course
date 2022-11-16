//Teacher.cpp

#include "Employee.h"
#include "Teacher.h"
#include <iostream>

int main(){

  Teacher t = Teacher("Nikhil", "SB college", 30, "Neutrino Physics");
  t.PrepareLesson();
  t.AskForPromotion();
  return 0;
}
