//Sphere.cc

#include "Sphere.h"
#include<iostream>

Sphere::Sphere(const std::string& name,double m, double r):Solid(name,m){

    r_ = r;

}

double Sphere::com_mominertia() const {
    
    return 2./5.*mass() * r_*r_;

}

void Sphere::print() const {
    std::cout <<"name of the solid: "<<name() <<"\t mass: " << mass()<<" Kg"<< "\t radius: " << r_ <<" m"<< std::endl;   
}