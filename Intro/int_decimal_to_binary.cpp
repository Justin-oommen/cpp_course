//decimal to binary conversion of an integer


#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

  //integer variable for conversion
  int number;
  //array to store 32 bits binary number
  int binary[32];

  //initializing the terms in the array first
  for (int i =0; i<32; ++i){
    binary[i]=0;
  }

  //asking the integer number from user which is then stored
  //in the variable number

  cout<<"Input the integer number for binary conversion : ";
  cin>>number;

  //converting and storing in the array
  for (int i = 0; i<32; ++i){
    binary[i] = number%2;
    number /= 2;
  }

  //printing the result
  cout<<"Input integer number = "<<number<<" size of the integer= "<<sizeof(number)<<endl;

  /*
  for (int i =0; i<32; ++i){
    cout<<" i = "<< i << " value = "<<binary[i]<<endl;
  }
  */

  cout<<"Binary value = ";
  for (int i =0; i<32; ++i){
    cout<<binary[i];

  }
  
  cout<<"\nRead from right to left "<<endl;  

  return 0;
}
