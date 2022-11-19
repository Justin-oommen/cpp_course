// Linear.h

#ifndef Linear_h
#define Linear_h

#include "Function.h"

class Linear: public Function{

 public:

  Linear(const std::string& name, double m, double b);
  virtual ~Linear();
  virtual double value(double x) const;
  virtual double integrate(double xlow,double xhigh) const;
  virtual void print() const;
  

  
 private:
  double m_,b_;
};


#endif
