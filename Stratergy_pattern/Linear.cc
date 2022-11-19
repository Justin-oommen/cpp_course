// Linear.cc

#include "Linear.h"

Linear::Linear(const std::string& name,double m, double b):Function(name){
  m_=m;
  b_=b;
}

Linear::~Linear(){
  std::cout<<"~Linear Function() called "<<std::endl;
}

double Linear::value(double x) const{
  return m_*x + b_;
}

double Linear::integrate(double xlow, double xhigh) const{
  return m_/2*(xhigh*xhigh - xlow*xlow) + b_*(xhigh-xlow);
}

void Linear::print() const{
  std::cout<<"Linear Function with name: "<<name()<<" with Slope m = "<<m_<<std::endl;
}
