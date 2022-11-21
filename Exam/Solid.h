// Solid.h

#ifndef Solid_h
#define Solid_h

#include <string>

class Solid{

 public:
  //regular constructor
  Solid(const std::string& name);
  // defining an abstract method for center of mass  moment of inertia
  virtual double com_mominteria(const double& m, const double& l) const = 0;
  // abstract method for Moment of inertia I = Icom + M*d^2
  //virtual double mominertia() const = 0;
  // defining an abstract method for kinetic energy
  //virtual double kenergy() const = 0;
  //print method
  virtual void print() const;
  //get name
  virtual std::string name() const;
 
 private:
  std::string name_;
  
};


#endif
