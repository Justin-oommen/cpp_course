//Teacher.h

#ifndef Teacher_h
#define Teacher_h

#include "Employee.h"
#include <iostream>

using std::string;


class Teacher: public Employee{
 public:
  Teacher(string name,string company, int age, string subject);

  void PrepareLesson();
  
 private:
  string subject_;

};


#endif
