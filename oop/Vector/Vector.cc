// Vector.cc

#include "Vector.h"
#include <iostream>

// default Constructor
Vector::Vector(){
  length_ = 0;
  vec_ = NULL;
}

//Regular Constructor
Vector::Vector(int length, const double *array){
  length_ = length;
  vec_ = new double[length];
  for(int i=0; i<length; ++i){
    vec_[i] = array[i];
  }    
}

//copy Constructor
Vector::Vector(const Vector& v){
  vec_ = new double[length_ = v.length_];
  *this = v;
}

//Destructor
Vector::~Vector(){
  delete[] vec_;
}

//Number of elements in the array
int Vector::getLength() const{
  return length_;
}

//Normalize a Vector
void Vector::normalize(){
  double tmp = 1.0/l2norm();
  for(int i=0; i<length_;++i){
    vec_[i]= vec_[i]*tmp;
  }
}

//l2norm of the vector
double Vector::l2norm() const{
  double tmp =0;
  for(int i=0; i<length_; ++i){
    tmp += vec_[i]*vec_[i];
  }
  return sqrt(tmp);
}

//print
void Vector::print(std::ostream& os) const{
  for(int i=0;i<length_;++i){
    os<<"("<<i<<")"<<vec_[i]<<std::endl;
  }
}

//change the length of the Vector
bool Vector::redim(int length){
  if(length == length_){
    return false;
  }
  else{
    if(vec_ != NULL){
      delete[] vec_;
    }
    length_ = length;
    vec_ = new double[length_];
    return true;
  }
}

bool Vector::indexOk(int i) const{
  if (i<0 or i>=length_){
    std::cout<<"Vector index check; index i = "<<i
	     <<"Out of bounds 0: "<<length_-1<<std::endl;
    return false;
  }
  else
    return true; //valid index
}


//[] overloading
const double& Vector::operator[](int i) const{
  #ifndef CHECKBOUNDS_ON
  indexOk(i);
  #endif
  return vec_[i];
}

//read-write
double& Vector::operator[](int i){
  #ifndef CHECKBOUNDS_ON
  indexOk(i);
  #endif
  return vec_[i];
}
 
 
 
//copy-assignment operator
 Vector& Vector::operator=(const Vector& rhs){
   if(this != &rhs)
     if(length_ != rhs.length_)
       std::cout<<"Bad vector sizes"<<std::endl;

   for(int i=0; i<length_; ++i){
     vec_[i] = rhs[i];
   }
   return *this; 
 }


//v+=w
Vector& Vector::operator+=(const Vector& rhs){
  if(length_ != rhs.length_)
    std::cout<<"Bad vector sizes"<<std::endl;

  for(int i=0; i<length_; ++i){
    vec_[i] += rhs[i];
  }
  return *this; 
  
}


//v-=w
Vector& Vector::operator-=(const Vector& rhs){
  if(length_ != rhs.length_)
    std::cout<<"Bad vector sizes"<<std::endl;

  for(int i=0; i<length_; ++i){
    vec_[i] -= rhs[i];
  }
  return *this; 
  
}


//v*=a
Vector& Vector::operator*=(double a){
  for(int i=0; i<length_; ++i){
    vec_[i] *= a;
  }
  return *this; 

}

// v/=a
Vector& Vector::operator/=(double a){
  for(int i=0; i<length_; ++i){
    vec_[i] /= a;
  }
  return *this; 

}


// Sum of two vectors
Vector operator+(const Vector& lhs, const Vector& rhs){
  return Vector(lhs) += rhs;
}

// Substraction of two vectors
Vector operator-(const Vector& lhs, const Vector& rhs){
  return Vector(lhs) -= rhs;
}
