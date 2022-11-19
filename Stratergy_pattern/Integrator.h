// Integrator.h

#ifndef Integrator_h
#define Integrator_h

class Integrator{

 public:

  Integrator(){
    integrand_ = 0;
  }

  void setIntegrand(double (*f)(double)){
    integrand_=f;
  }

  double integrand(double x) const{
    return integrand_(x);
  }

  //pure virtual function
  virtual double integrate(double xlow, double xhigh) const = 0;
  
 private:
  //Function pointer
  double (*integrand_)(double);
};


#endif
