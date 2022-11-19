#ifndef Constant_h
#define Constant_h

#include "Function.h"
#include <iostream>

class Constant: public Function{

 public:

  Constant(const std::string& name, double value);
  virtual ~Constant();
  virtual double value(double x) const;
  virtual double integrate(double xlow, double xhigh) const;
  virtual void print() const;

 private:
  double value_;
  
};


#endif
