//app.cc

#include<iostream>
#include "Solid.h"
#include "Sphere.h"
#include <cmath>

int main(){

  Sphere s("Sphere",5,10);
  // std::cout<<"Sphere with mass "<<s.getMass()<<" and radius : "<<s.getRadius()
  //	   <<"\t "<<s.com_mominteria(5,10)<<std::endl;
    //	   <<"\t Kinetic Energy: "<<s.kenergy()<<std::endl;
  //s.print();
  double com_mominteria = s.com_mominteria(5,10);
  std::cout<<com_mominteria<<std::endl;

  
}
