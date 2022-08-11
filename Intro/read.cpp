#include<iostream>
#include<fstream>
#include<string> //to access getline method

using namespace::std;

int main(){

  fstream myFile;
  myFile.open("test.txt",ios::in);//read mode
  if (myFile.is_open()){
    string line;
    while (getline(myFile,line)){
      cout<< line <<endl;
    }
    myFile.close();
  }

  return 0;
}
