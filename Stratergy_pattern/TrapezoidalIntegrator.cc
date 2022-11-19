// TrapezoidalIntegrator.cc


#include "TrapezoidalIntegrator.h"
#include <iostream>
#include <cmath>

TrapezoidalIntegrator::TrapezoidalIntegrator(int n):Integrator(){
  n_ = n;
}

void TrapezoidalIntegrator::setNpoints(int n){
  n_ = n;
}

double TrapezoidalIntegrator::integrate(double xlow,double xhigh) const{
  double h = (xhigh - xlow)/n_;
  double s = integrand(xlow)+integrand(xhigh);
  for(int i=0; i<n_; ++i){
    s += 2*integrand(xlow+(i*h));
  }
  return (h/2)*s;
}
