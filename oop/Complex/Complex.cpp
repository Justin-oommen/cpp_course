//Complex.cpp


#include "Complex.h"
//#include<iostream>

using std::cout;
using std::endl;

int main(){

Complex z1(1.0,2.0);
Complex z2(3.0,4.0);

Complex z3(5.0,10.0);
Complex z4 = z1;

 cout << "z1 = "<<z1<<endl;
cout << "z2 = "<<z2<<endl;
cout << "z3 = "<<z3<<endl;
cout << "z4 = "<<z4<<endl;

cout<<"Magnitude of Complex number z2 = "<<z2.getAbs()<<endl;

Complex z5 = z3*z4;
cout << "z5 = "<<z5<<"\t Real part: "<<z5.getRe()<<"\t Imaginary part: "<<z5.getIm()<<"\t Magnitude: "<<z5.getAbs()<<endl;

 return 0;
 
}
