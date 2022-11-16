//Developer.h

#ifndef Developer_h
#define Developer_h

#include "Employee.h"
#include <iostream>

using std::string;

class Developer: public  Employee{

 public:
  Developer(string name, string company, int age, string favProgramLang);
  
  void details();

  virtual void print();
  
 private:
  string favProgramLang_;
  

};

#endif
