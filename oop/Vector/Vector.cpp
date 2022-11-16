//Vector.cpp

#include "Vector.h"
#include <iostream>

using std::cout;
using std::endl;



int main(){


  Vector v1;

  // Redimension the vector to have length n:
  int n1 = 3;
  v1.redim(n1);
  cout << "v1.getlength: " << v1.getLength() << endl;


  // Extract the length of the vector:
  const int length = v1.getLength();

  // Create a vector of a specific length:
  //int n2 = 5;
  //Vector v2(n2);
  //cout << "v2.getlength: " << v2.getLength() << endl;

  // Create a vector from an existing array:
  int n3 = 3;
  double* array = new double[n3];
  Vector v4(n3, array);
  cout << "v4.getlength: " << v4.getLength() << endl;

  // Create a vector as a copy of another one:
  Vector v5(v1);
  cout << "v5.getlength: " << v5.getLength() << endl;

  // Assign the entries in a vector:
  v5[0] = 3.0; // or alternatively v5[0] = 3.0;
  v5[1] = 2.5; // or alternatively v5[1] = 2.5;
  v5[2] = 1.0; // or alternatively v5[2] = 1.0;


  // Extract the ith component of a vector:
  int i = 2;
  double value = v5[1];
  cout << "value: " << value << endl;

  // Set a vector equal another one:
  Vector v6 = v5;
  cout << "try redim.v6: " << v6.redim(1) << endl;
  cout << "v6.getLength: " << v6.getLength() << endl;

  // Take the inner product between two vectors:
  // double dot = v6.inner(v5); // alternatively: double dot = inner(v6,v5);
  //cout << "dot(v6,v5): " << dot << endl;

  // Get the euclidean norm to a vector:
  double norm = v6.l2norm();
  cout << "norm of v6: " << norm << endl;

  // Normalize a vector:
  v5.normalize();

  // Dump a vector to the screen:
  v5.print(std::cout << "v5: " << endl);

  // Arithmetic operations with vectors using a
  // syntax close to the mathematical language
  //int a = 2;
  Vector w = v1 + v6;
  w.print(std::cout << "w: " << endl);

  
 return 0;
}
