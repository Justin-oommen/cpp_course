// A Sphere class
//Sphere.h

#include "Solid.h"

class Sphere : public Solid{
    public:
        //Regular constructor for creating spheres
        Sphere(const std::string& name, double m, double r);
        //Center of mass
        virtual double com_mominertia() const;
        //Print method
        virtual void print() const;
        

    private:

        double r_; //radius in meters

};