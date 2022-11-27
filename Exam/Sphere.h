// A Sphere class
//Sphere.h

#include "Solid.h"

class Sphere : public Solid{
    public:
        //Regular constructor for creating spheres
        Sphere(const std::string& name, double m, double r);
        //Center of mass
        virtual double com_mominertia() const;
        //Momentum of inertia. d in meters.
        //virtual double moment_inertia(double d) const;
        //Computing Kinetic energy. omega in radians.
        virtual double kinetic_energy(double omega,double d) const;
        //Print method
        virtual void print() const;

        //Setter
       
        void set_r(double r);
        //Getter
        

    private:

        double r_; //radius in meters

};