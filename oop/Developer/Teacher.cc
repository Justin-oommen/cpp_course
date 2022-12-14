//Teacher.cc

#include "Teacher.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Teacher::Teacher(string name,string company,int age, string subject):Employee(name,company,age){
  subject_ = subject;
}

void Teacher::PrepareLesson(){
  cout<<getName()<<" is preparing the subject "<< subject_<<endl;
}



void Teacher::print(){
  cout<<"I am a Teacher: "<<getName()<<" at "<<getCompany()<<" teaching "<<subject_<<endl;
}

/*
void Teacher::work(){
  cout<<getName()<<" is a teacher at "<<getCompany()<<endl;
  }*/
