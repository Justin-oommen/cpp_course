//Employee.h

#ifndef Employee_h
#define Employee_h

#include<iostream>

using std::string;
using std::cout;
using std::endl;

class AbstractEmployee{
  //an abstract method about promoting an employee
  virtual void AskForPromotion() = 0;
  
};

class Employee:AbstractEmployee{
  
public:
  //Constructor
  Employee(string name,string company,int age);

  //setter and getter
  void setName(string name);
  string getName();

  void setCompany(string company);
  string getCompany();

  void setAge(int age);
  int getAge();

  void AskForPromotion();
  
  void print();
  
private:
  string name_;
  string company_;
  int age_;
  
};


#endif
