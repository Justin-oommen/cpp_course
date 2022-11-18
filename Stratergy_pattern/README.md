# Stratergy Pattern

- This is a repository regarding stratergy pattern but the whole concept cover the main topics in
object oriented programming such as Inheritance, Polymorphism etc.
- Here our objective is to create a stratergy pattern to Integrate and possibly and iterator also later.
- Stratergy Pattern is a behavioural software design pattern that enables selecting an algorithm at runtime. Instead of implementing a single algorithm directly the code recieves runtime instructions as to which algorithm to use among a family of interchangeable algorithms,
  - Each one is encapasulated as an object.
  - The algorithm concretely used varies independently from user to user.
- Typically the stratergy pattern stores a reference to some code in a data structure an retrieves it(Here we use the function pointers for that purpose.)
- Function pointer:
  - eg: double (*func) (double)
  So here the *func is a function that takes the arg double and return a double. Since *func is a function, func is a pointer to that function.
  - to initialize we use the syntax, func = a_function_we_want_to_call.
  - to use a functional pointer we use, func(2).

- To integrate a function we need,
  1. a function (integrand)
  2. interval [a,b]
  3. a concrete stratergy

# Function

- We implement inheretance and polymorphic behaviour.
- Polymorphism is implemented by abstract method.
- A base class is implemented by Abstract method and then the concrete classess are inhereted from the base class.
- A Base class may atleat have name,value, integrate, print method
- Concrete class include- Constant function, Gauss function, Polynomial, linear function etc.


# Intergrator

- Have a base class called Integrator
- Inherit different Concrete Integrator class include MC,Trapizoidal method,Simspon,Rectangle method.
- We have two things to do
  1. Create an Integrator for regular functions in c++.
  2. Create a CustomIntegrator for Custom functions we created like above.
  