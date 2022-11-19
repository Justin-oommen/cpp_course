// Function.cc

#include "Function.h"
#include <iostream>
//#include <string>

Function::Function(const std::string& name) {
  name_ = name;
}

Function::~Function() {
  std::cout<<"~Function() called"<<std::endl;
}

void Function::print() const {
  std::cout<<" Function with name "<<name_<<std::endl;
}

std::string Function::name() const{
  return name_;
}
