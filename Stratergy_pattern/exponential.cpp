// main file

#include "Integrator.h"
#include "TrapezoidalIntegrator.h"

#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

  TrapezoidalIntegrator t(100);
  t.setIntegrand(exp);

  double a,b;
  std::cout<<"Program to integrate the exponential function over [a,b]"<<std::endl;
  std::cout<<"a : ";
  std::cin>>a;
  std::cout<<"b : ";
  std::cin>>b;
  
  double analyticalIntegral = t.integrand(b) - t.integrand(a);
  std::cout << "analytical integral: " << analyticalIntegral << std::endl;
  
  for(int n= 10; n< 1e8; n *=10 ) {
    t.setNpoints(n);
    double sum = t.integrate( a, b ); // integral from a -> b
    std::cout << "# points: " << std::setw(10) << n
	      << "\t Integral: " <<std::setprecision(6) << sum
	      << "\t residual: "
	      << sum - analyticalIntegral
	      << "\t fractional difference: " <<std::setprecision(3)
	      << 100*(sum - analyticalIntegral)/analyticalIntegral << " %"
	      << std::endl;
  }
}
