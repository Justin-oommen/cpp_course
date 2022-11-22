#include "Solid.h"

Solid::Solid(const std::string& name,double m){
    name_ = name;
    m_ = m;


}

void Solid::print() const {
    std::cout << "Solid : " << name_ <<"\t Mass: "<<m_<< std::endl;
    
}

std::string Solid::name() const {
    return name_;
}

double Solid::mass() const {
    return m_;
}
