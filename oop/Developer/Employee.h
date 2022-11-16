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
  
  virtual void print();

  //the most common use of polymorphism is when parent class reference is used
  //parent class refernece is used to refer to a child class object.

  //virtual functions are used to achieve polymorphic behaviour that is the
  //same pointer behave according to the object that it points it to.

  // virtual void work();
  
private:
  string name_;
  string company_;
  int age_;
  
};


#endif
