// TrapezoidalIntegrator.h

#ifndef TrapezoidalIntegrator_h
#define TrapezoidalIntegrator_h

#include "Integrator.h"

class TrapezoidalIntegrator:public Integrator{

 public:
  TrapezoidalIntegrator(int n);

  void setNpoints(int n);

  virtual double integrate(double xlow, double xhigh) const;

 private:
  int n_;
};


#endif
