// Function.h


#ifndef Function_h
#define Function_h

#include <string>
#include <iostream>

class Function{
  
public:

  //Regular constructor
  Function(const std::string& name);
  
  //Virtual Destructor
  virtual ~Function();
  
  // pure virtual because value depends on the concrete function itself
  virtual double value(double x) const = 0;
  //Integrate the function
  virtual double integrate(double x1, double x2) const = 0;
  //print method
  virtual void print() const;
  //Get name
  virtual std::string name() const;
  
  
  
private:
  std::string name_;
  
};


#endif 
