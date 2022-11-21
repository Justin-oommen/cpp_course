// Sphere.cc

#include "Sphere.h"
#include <iostream>
#include <cmath>

Sphere::Sphere(const std::string& name, double m, double r):Solid(name){
  m_ = m;
  r_ = r;
  //omega_ = omega;
  //d_ = d;

}

/*
Sphere::Sphere(const std::string& name, double m, double r,double omega,double d):Solid(name){
  m_ = m;
  r_ = r;
  omega_ = omega;
  d_ = d;
}
*/
double Sphere::com_mominteria(const double& m, const double& r) const{
  //m_ = m;
  //r_ = r;
  std::cout<<"mass: "<<m<<"\t Radius:"<<r<<std::endl;
  double mom =  (2/5)*m*(r*r);
  std::cout<<"mom = "<<mom<<std::endl;
  return mom;
}
/*
double Sphere::mominertia() const{
  double com_mominteria = this->com_mominteria(m_,r_);
  return com_mominteria + m_*(d_*d_);
}

double Sphere::kenergy() const{
  double mominertia = this->mominertia();
  return 1/2*mominertia*omega_*omega_;
}
*/
void Sphere::print() const {
  /*
  std::cout<<"Solid with name: "<<name()<<"\t Kinetic energy = "<< kenergy()
  	   <<"\t COM MI = "<<com_mominteria(m_,r_)<<std::endl;
  */
  std::cout<<"Solid with name: "<<name()<<"\t mass = "<<m_<<"\t Radius: "<<r_<<std::endl;

}

void Sphere::setMass(double m){
  m_ = m;
}

void Sphere::setRadius(double r){
  r_ = r;
}
/*
void Sphere::setOmega(double omega){
  omega_ = omega;
}

void Sphere::setDistance(double d ){
  d_ = d;
}

*/
double Sphere::getMass() const{
  return m_;
}

double Sphere::getRadius() const{
  return r_;
}
/*
double Sphere::getOmega() const{
  return omega_;
}

double Sphere::getDistance() const{
  return d_;
}

*/
