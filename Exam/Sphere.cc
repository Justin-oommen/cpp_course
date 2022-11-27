//Sphere.cc

#include "Sphere.h"
#include<iostream>

Sphere::Sphere(const std::string& name,double m, double r):Solid(name,m){

    r_ = r;

}

double Sphere::com_mominertia() const {
    
    return 2./5.*mass() * r_*r_;

}

// double Sphere::moment_inertia(double d) const {
//     double com_mominertia = this->com_mominertia();
//     return com_mominertia + mass()*d*d;
// }

double Sphere::kinetic_energy(double omega,double d) const {
    double moment_inertia = this->com_mominertia() + mass()*d*d;
    std::cout <<"Moment of Inertia: " <<moment_inertia << std::endl;
    return 0.5*moment_inertia*omega*omega;
}

void Sphere::print() const {
    std::cout <<"name of the solid: "<<name() <<"\t mass: " << mass()<<" Kg"<< "\t radius: " << r_ <<" m"<< std::endl;  
}

// void Sphere::set_m(double m){
//     &mass = this->mass();
//     &mass = m;
// }

void Sphere::set_r(double r){
    r_ = r;

}