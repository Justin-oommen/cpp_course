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
    //Print method
    virtual void print() const;
    //Get name method
    virtual std::string name() const;
    //Get mass method
    virtual double mass() const;
    
private:
    std::string name_;
    double m_; //mass in kg

};

#endif