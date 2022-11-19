#include "Constant.h"
#include <iostream>

Constant::Constant(const std::string& name, double value): Function(name){
  value_ = value;
}

Constant::~Constant(){
  std::cout<<"~Constant() called"<<std::endl;
}

double Constant::value(double x) const{
  return value_;
}

double Constant::integrate(double xlow, double xhigh) const{
  return (xhigh - xlow)*value_;
}

void Constant::print() const{
  std::cout<<"Constant Function with name: "<<name()<<" F("<<value_<<") = "<<value_<<std::endl;
}
