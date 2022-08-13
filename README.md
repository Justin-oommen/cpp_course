# cpp_course

Hello, this is a self study of C++ programming in relation with what I was taught in my masters.

After the introductory lessons, I dive deep in to the advanced concepts like objected oriented programming.
The goal is not only to learn to code but actually learn them on a way to solve physics problems.

Therefore after learning the concepts of Object oriendted programming, I will try to solve physics problems like,
- Implementing Numerical methods
- Composite Pattern and Stratergic Patterns in Physcis
- High Energy Physcis Problems
- ROOT analysis

Mostly this repository contains the worked out exercise rather than notes. I will try my best to comment the concepts during coding. If you are reading this try it out and be better than yesterday even if it is a small line of code that you implement by yourself. Learning is a big process we need consistent steps to move forward and I wish you all the best and wish me good luck also.

I will be posting the exercises as well, if you want comment email me on justinooomen968@gmail.com

##Virtual and Pure virtual - Allows Polymorphic behaviour

• No default implementation for pure virtual

‣ Requires explicit implementation in derived classes

• Use pure virtual when

‣ Need to enforce policy for derived classes

‣ Need to guarantee public interface for all derived classes

‣ You expect to have certain functionalities but too early to provide default implementation in base class

‣ Default implementation can lead to error

User forgets to implement correctly a virtual function

Default implementation is used in a meaningless way

• Virtual allows polymorphism

• Pure virtual forces derived classes to ensure correct implementation


# Introduction

## Main() function

   int main (int argc, char* argv[])

   - argc stands for the number of command-line arguments.
   - argv is a vector of strings containing the command-line argument 
   - argv[0] containing the name of the program 
   - argv[1], argv[2],.. etc. are the command-line arguments. 
   - ie, the number of lines of input to the program.

## Namespace:

   - Namespace is a way to collect all functions defined in C++ libraries. If we omit this declaration on top of the program we would have to add the declaration std in front of cout or cin.
   eg: std::cout,std::endl etc.
   