// Sphere.h

#ifndef Sphere_h
#define Sphere_h

#include "Solid.h"

class Sphere:public Solid{

 public:
  //regular constructor
  // Sphere(const std::string& name,double m,double r,double omega,double d);
  Sphere(const std::string& name,double m,double r);

  virtual double com_mominteria(const double& m, const double& r) const;

  //virtual double mominertia() const;
  
  //virtual double kenergy() const;

  virtual void print() const;

  //setter
  void setMass(double m);
  void setRadius(double r);
  //void setOmega(double omega);
  //void setDistance(double d);

  //getter
  double getMass() const;
  double getRadius() const;
  //double getOmega() const;
  //double getDistance() const;
  

 private:
  double m_; //mass 
  double r_; //radius
  //double omega_; //angular frequency
  //double d_ ; //the distance between the rotation axis and an axis parallel to it that
              //goes through the center of mass (CoM).

};


#endif
