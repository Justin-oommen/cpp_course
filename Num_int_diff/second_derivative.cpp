//Second derivative of function f(x)= exp(x)

#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;
//using std::setioflags;
using std::setprecision;

void initialize(double *,double *,int *);
void second_derivative(int,double,double,double *,double *,double *);
void output(double *,double *,double *,double,int);

ofstream ofile;

int main(){

  // ofstream ofile;

  //declaration of variables
  //char *outfilename;
  int num_of_steps;
  double x,initial_step;
  double *h_step, *computed_derivative, *exact_derivative;

  ofile.open("outfilename.txt");

  // read in input data from screen
  initialize(&initial_step, &x, &num_of_steps);

  //allocate memory for 1d array
  // h_step and computed derivative
  h_step = new double[num_of_steps];
  computed_derivative = new double[num_of_steps];
  exact_derivative = new double[num_of_steps];
    
  // compute the second derivative
  second_derivative(num_of_steps,x,initial_step,h_step,computed_derivative,exact_derivative);

  //print the result to a file
  output(h_step,computed_derivative,exact_derivative,x,num_of_steps);

  // free memory
  delete [] h_step;
  delete [] computed_derivative;
  delete [] exact_derivative;
  ofile.close();
  
  

  return 0;
}

// the function recieves the address of the three variables
void initialize(double *initial_step,double *x, int *num_of_steps){

  cout<<"Read in from the screen initial step, x and number of steps\n";

  cin>>*initial_step;
  cin>>*x;
  cin>>*num_of_steps;
  
  //return;
}


void second_derivative(int num_of_steps,double x,double initial_step,double *h_step, double *computed_derivative,double *exact_derivative){

  // cout<<"Computing the second derivative";
  double h;
  h = initial_step;
  
  // loop over the number of steps serves to compute the second derivative for any values of h
  for(int counter=0; counter<num_of_steps; ++counter){
    // computing the second derivative for each h(step size) and saving it in an array
    h_step[counter] = h;
    computed_derivative[counter] = (exp(x+h)-2*exp(x)+exp(x-h))/(h*h);
    exact_derivative[counter] = exp(x);
    // the step size is havled for each iteration
    h = h*0.1;
    
  }
  

  return;
}


void output(double *h_step, double *computed_derivative,double *exact_derivative,double x,int num_of_steps){
  // using std::setioflags;
  
  ofile << "RESULTS: "<<endl;
  //ofile << setioflags(ios::showpoint | ios::uppercase);
  
  ofile<<"x";
  ofile<< setw(20)<<"h_step";
  ofile<< setw(20)<<"comp_derivative";
  ofile<< setw(20)<<"exact_derivative"<<endl;
  for (int i=0; i<num_of_steps;++i){
    ofile << setprecision(8) << x;
    ofile << setw(20) << setprecision(8) <<h_step[i];
    ofile << setw(20) << setprecision(8) << computed_derivative[i];
    ofile << setw(20) << setprecision(8) << exact_derivative[i]<<endl;


  }
  
}
