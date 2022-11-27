//app.cpp

#include<iostream>
#include "Solid.h"
#include "Sphere.h"
#include "Rod.h"
#include <cmath>

int main(){

  Sphere s("Sphere",5.,10.);
  s.print(); 
  double com_mom_interia = s.com_mominertia();
  std::cout<<"Center of Mass Moment of Inertia: "<<com_mom_interia<< " Kgm^2"<<std::endl;
  //double mom_of_interia = s.moment_inertia(3.);
  //std::cout<<"Moment of Inertia: "<<mom_of_interia<<" Kgm^2"<<std::endl;
  double kinetic_energy = s.kinetic_energy(2*M_PI,10.);
  std::cout<<"Kinetic Energy: "<<kinetic_energy<<" Joules"<<std::endl;


  s.set_mass(10);
  s.print();
  std::cout<<"Center of Mass Moment of Inertia: "<<s.com_mominertia()<<std::endl;

  std::cout<<"-------------------------------------------------------------"<<std::endl;


  Rod r("Rod",2.,5.);
  r.print();
  double com_mom_interia_rod = r.com_mominertia();
  std::cout<<"Center of Mass Moment of Inertia: "<<com_mom_interia_rod<<std::endl;
  double kinetic_energy_rod = r.kinetic_energy(2*M_PI,2.5);
  std::cout<<"Kinetic Energy: "<<kinetic_energy_rod<<" Joules"<<std::endl;

}
