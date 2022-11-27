#ifndef Solid_h
#define Solid_h

#include <iostream>
#include <string>

class Solid{

public:
    //Regular constructor
    Solid(const std::string& name, double m);
    //Abstract method for claculating center of mass moment of inertia
    virtual double com_mominertia() const = 0;
    //Abstract method for computing moment of inertia = Icom + Md^2
    //virtual double moment_inertia(double d) const = 0;
    //Computing Kinetic energy
    virtual double kinetic_energy(double omega,double d) const = 0;
    //Print method
    virtual void print() const;
    //Get name method
    virtual std::string name() const;
    //Get mass method
    virtual double mass() const;
    //Get length method
    //virtual double length() const;
    //set mass method
    virtual void set_mass(double m);

    
private:
    std::string name_;
    double m_; //mass in kg
    //double length_; // length in meters

};

#endif