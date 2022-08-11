#include<iostream>
//to read and write from our console
//we use fstream library
#include<fstream>
using namespace::std;

int main(){

  //data type in stream
  fstream myFile;

  //open a file- open(name,mode[read or write])
  // ios::out mode we ae going to override the file
  // to add information to existing file we use append mode
  // ios::app --> append mode

  
  myFile.open("test.txt",ios::out); //write mode in to txt file
  if (myFile.is_open()){
      myFile<<"Hello\n";
      myFile<<"This is second line\n";
      myFile.close();
    }

  myFile.open("test.txt",ios::app); //append mode in to txt file
  if (myFile.is_open()){
      myFile<<"Again Hello\n";
      myFile.close();
    }

  
  return 0;
}
