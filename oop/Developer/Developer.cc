//Developer.cc

#include "Employee.h"
#include "Developer.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Developer::Developer(string name, string company, int age, string favProgramLang):Employee(name,company,age){
  
  favProgramLang_ = favProgramLang;
  
}

void Developer::details(){

  cout<<getName()<<" is using "<<favProgramLang_<<" to use coding "<<endl;
  
}

void Developer::print(){
  cout<<"I am a Developer "<<getName()<<" at "<<getCompany()<<" using "<<favProgramLang_<<endl;
}
