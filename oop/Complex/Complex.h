//Complex.h

#ifndef Complex_h
#define Complex_h

#include <iostream>


class Complex{

 public:
  //Default Constructor
  /*
    The constructor tells how we define a variable of type Complex and
    how it is initialized.They are created with the same name of the class itself.
    There are three types of constructor,
    - Default constructor
    - Regular constructor
    - Copy constructor
   */
  Complex ();
  Complex (double re, double im);
  Complex (const Complex& c);

  //Destructor
  ~Complex() {}

  //setter
  void setRe(double re);
  void setIm(double im);

  //getter
  double getRe() const;  //Real part
  double getIm() const;  //Imaginary part
  double getAbs() const; //modulus- absolute value

  //equate two complex variables
  Complex& operator= (const Complex& rhs);

  //Complex operations such as add,substract,multiply,divide
  friend Complex operator+ (const Complex& rhs, const Complex& lhs);
  friend Complex operator- (const Complex& rhs, const Complex& lhs);
  friend Complex operator* (const Complex& rhs, const Complex& lhs);
  friend Complex operator/ (const Complex& rhs, const Complex& lhs);

  //output stream of complex
  friend std::ostream& operator<< (std::ostream& os,const Complex& rhs);
  
    
  
 private:
  double re_,im_;
};

#endif
