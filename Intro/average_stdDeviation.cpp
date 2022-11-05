//Calcualte Average and Standard Deviation


#include<iostream>
#include<cmath>
using std::cout;
using std::endl;


int main(){

//Declaring and initializing variables

  
  float sum = 0.;
  float sumsq2 = 0.;
  float xbar = 0.;
  float sigma = 0.;
 
  //Create a fixed dimension array to store x(i)

  float x[127];
  
  //initialize dataset
  
  for (int i =0; i<127; ++i){
    x[i] = i + 100000.;
  }
  
  //Calculate sum and sumsq2
  
  for (int i=0; i<127; ++i){
    sum += x[i];
    sumsq2 += (double) x[i] * (double) x[i];
  }
  
  //calculate xbar and sigma
  
  xbar = sum/127.;
  sigma = sqrt((sumsq2-xbar*sum)/126.);
  
  cout<<"xbar = "<<xbar<<"\tsigma = "<<sigma<<endl;
  
  
  //The standard algorithm computes the two contributions to σ separately,
  //Since these two numbers can become nearly equal and large,
  //we may end up in a situation with potential loss of precision as an outcome.
  
  /*
    The second algorithm on the other hand computes first x(i) − x and then squares it when
    summing up. With this recipe we may avoid having nearly equal numbers which cancel
  */
  
  sumsq2=0.;
  for (int i=0; i<127; ++i){
    sumsq2 += (double) (x[i]-xbar)* (double) (x[i]-xbar);
  }

  sigma = sqrt(sumsq2/126.);

  cout<<"xbar = "<<xbar<<"\tsigma = "<<sigma<<endl;
  
  return 0; 
 
}
