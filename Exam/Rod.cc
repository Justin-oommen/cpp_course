#include "Rod.h"

Rod::Rod(const std::string& name, double m, double length):Solid(name, m){
    length_ = length;

}

double Rod::com_mominertia() const {
    return 1./12.* mass()*length_*length_;

}

double Rod::kinetic_energy(double omega,double d) const {
    double mom_inertia = this->com_mominertia() + mass()*d*d;
    std::cout <<"mom_inertia: "<< mom_inertia << std::endl;
    return 0.5*mom_inertia*omega*omega;

}

void Rod::print() const {
    std::cout << "Name of the solid:" << name() << " with mass " << mass()<<" with length " << length_<<std::endl;

}