#include "Solid.h"

class Rod: public Solid {

public:
    Rod(const std::string& name, double m, double length);

    virtual double com_mominertia() const;

    virtual double kinetic_energy(double omega, double d) const;

    virtual void print() const;
private:
    double length_;



};