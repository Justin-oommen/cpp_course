#include<iostream>

int main(){
  //compiler error, no semi coulmn at the end
  std::cout<<"Hello World"<<std::endl

  //run time error
  int value = 7/0;
  std::cout<<"value: "<<value<<std::endl;

  
  
  return 0;
}
