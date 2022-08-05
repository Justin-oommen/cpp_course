//Employee.cc

#include "Employee.h"
#include<iostream>

using std::string;
using std::cout;
using std::endl;


Employee::Employee(string name,string company,int age){
  name_ = name;
  company_=company;
  age_ = age;
}

void Employee::setName(string name){
  name_ = name;
}

string Employee::getName(){
  return name_;
}

void Employee::setCompany(string company){
  company_ = company;
}

string Employee::getCompany(){
  return company_;
}

void Employee::setAge(int age){
  age_ = age;
}

int Employee::getAge(){
  return age_;
}

void Employee::AskForPromotion(){
  if (age_ >30){
      cout<<"Name: "<<name_<<"\t Age: "<<age_<<"\t Congrats, You got Promoted"<<endl;
    }
  else{
    cout<<"Name: "<<name_<<"\t Age: "<<age_<<"\t Sorry, You are not Promoted"<<endl;
  }
}

void Employee::print(){
    cout<<"Name: "<<name_<<endl;
    cout<<"Company: "<<company_<<endl;
    cout<<"Age: "<<age_<<endl;
}

