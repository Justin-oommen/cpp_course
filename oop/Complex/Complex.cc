//Complex.cc

#include "Complex.h"
#include <iostream>
#include <cmath>

Complex::Complex(){
  re_ = 0;
  im_ = 0;  
}

Complex::Complex(double re,double im){
  re_ = re;
  im_ = im;
}

Complex::Complex(const Complex& c){
  *this = c;
}

void Complex::setRe(double re){
  re_ = re;
}

void Complex::setIm(double im){
  im_ = im;
}

double Complex::getRe() const{
  return re_;
}

double Complex::getIm() const{
  return im_;
}

double Complex::getAbs() const{
  return sqrt(re_*re_ + im_*im_);
}

Complex& Complex::operator= (const Complex& rhs){
  re_ = rhs.re_;
  im_ = rhs.im_;
  return *this;
}

Complex operator+ (const Complex& rhs, const Complex& lhs){
  return Complex(rhs.re_+lhs.re_, rhs.im_+lhs.im_);
}

Complex operator- (const Complex& rhs, const Complex& lhs){
  return Complex(rhs.re_-lhs.re_, rhs.im_-lhs.im_);
}

Complex operator* (const Complex& rhs, const Complex& lhs){
  return Complex(rhs.re_*lhs.re_ - rhs.im_*lhs.im_, rhs.im_*lhs.re_ + rhs.re_*lhs.im_);
}

Complex operator/ (const Complex& rhs, const Complex& lhs){
  return Complex((rhs.re_*lhs.re_ + rhs.im_*lhs.im_)/lhs.getAbs(),( rhs.im_*lhs.re_ - rhs.re_*lhs.im_)/lhs.getAbs());
}

std::ostream& operator<< (std::ostream& os,const Complex& rhs){
  os<<"("<<rhs.getRe() <<","<<rhs.getIm()<<")";
  return os;
}



