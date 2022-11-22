//app.cpp

#include<iostream>
#include "Solid.h"
#include "Sphere.h"
#include <cmath>

int main(){

  Sphere s("Sphere",5.,10.);
  double mominteria = s.com_mominertia();
  std::cout<<"Center of Mass Moment of Inertia: "<<mominteria<< " Kgm^2"<<std::endl;

  s.print();
  
}
