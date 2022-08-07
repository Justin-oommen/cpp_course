//app.cpp

#include "Employee.h"
#include "Teacher.h"
#include "Developer.h"

int main(){

  //Teacher t = Teacher("Stefano","Sapienza University",45,"Physics");

  Employee* e1 = new Teacher("Stefano","Sapienza University",45,"Physics");
  Employee* e2 = new Developer("Nikhil","CERN",26,"C++");
  
  e1->Employee::print();
  e1->print();
    
  
  e2->Employee::print();
  e2->print();
  

  delete e1;
  delete e2;
  
  return 0;
}
