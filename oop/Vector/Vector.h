//Vector.h

#ifndef Vector_h
#define Vector_h

#include <iostream>
#include <cmath>

class Vector{

 public:

  //Default Constructor
  Vector();
  //Regular Constructor
  Vector(int length,const double *array);
  //Copy Constructor
  Vector(const Vector&);

  //Destructor
  ~Vector();

  //Getter methods

  // get the number of elements in the array
  //return the length of the array
  int getLength() const;

  // get particluar value of the element in the vector
  //double operator() (int i) const;

  //Setter Methods

  //inner product
  //double inner(const Vector&) const;

  //Normalize a vector. ie, create a unit vector
  void normalize();

  //l2 norm of the vector
  double l2norm() const;

  //print
  void print(std::ostream&) const;

  //change the length of the vector
  bool redim(int length);

  //check valid index
  bool indexOk(int i) const;
  
  
  // OVERLOADING OPERATORS

  //[] overloading
  // this is read only
  const double& operator[](int i) const;

  //read-write i-th element
  double& operator[](int i);
  
  //copy assignment operator. ie, v=w
  Vector& operator=(const Vector& rhs);

  // add-assignment
  // v += w
  Vector& operator+=(const Vector& rhs);
  
  //sub-assignment
  // v -= w
  Vector& operator-=(const Vector& rhs);

  //multiply-assignment
  // v *= a (a is scalar)
  Vector& operator*=(double a);

  //division-assignment
  // v /= a
  Vector& operator/=(double a);

  // Addition of 2 vectors
  friend Vector operator+(const Vector& lhs, const Vector& rhs);

  // Substraction of two vectors
  friend Vector operator-(const Vector& lhs, const Vector& rhs);

  // Multiplication of two vectors
  friend Vector operator*(const Vector& lhs, const Vector& rhs);

  // Premultiplication of a vector by floating point
  friend Vector operator*(double a, const Vector& rhs);

  // Post-Multiplication of a vector by a floating point
  friend Vector operator*(const Vector& lhs,double a);

  //Division by a scalar
  friend Vector operator/(const Vector& lhs, double a);

  // Dot product
  friend double inner(const Vector& lhs, const Vector& rhs);

  //print the entries of a vector by scalar
  friend std::ostream& operator<<(std::ostream&, const Vector& rhs);
  
  
 private:
  int length_;  //Number of entries
  double *vec_;  //Entries

};


#endif
