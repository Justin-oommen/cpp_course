//Employee.cpp

#include "Employee.h"
#include <iostream>

int main(){
  /*
  Employee employee1;
  employee1.Name = "Justin";
  employee1.Company = "Amazon";
  employee1.Age = 24;
  employee1.IntroduceYourself();

  Employee employee2;
  employee2.Name = "Nikhil";
  employee2.Company = "CERN";
  employee2.Age = 25;
  employee2.IntroduceYourself();
  */
  Employee employee1 = Employee("Justin","Sapienza",24);
  employee1.print();

  Employee employee2 = Employee("Nikhil","CERN",25);
  employee2.print();
  
  employee1.setName("Jerry");
  employee1.setAge(25);

  employee2.setName("Vivek");
  employee2.setAge(26);

  std::cout<<"After encaplsulation: "<<std::endl;
  employee1.print();
  employee2.print();

  employee1.setName("Amit");
  employee2.setName("Sibi");
  employee2.setAge(60);
  
  std::cout<<"Testing the Promotion Status of the two employee"<<std::endl;
  employee1.AskForPromotion();
  employee2.AskForPromotion();
  
  return 0;
}
