# Piscine-C++

## FOrward declaration :
https://www.incredibuild.com/blog/optimizing-cpp-header-files
## How to check empty file in c++
https://www.cplusplus.com/reference/istream/istream/peek/
## *this vs this in C++
https://stackoverflow.com/questions/2750316/this-vs-this-in-c
## Correction sheets :
https://drive.google.com/drive/folders/1PM3IT0WQvfun8mtkbHisuIDjmH-gADWJ
## My reference in C++:
https://www.learncpp.com/
## Shifting (module 02)
https://www.geeksforgeeks.org/left-shift-right-shift-operators-c-cpp/
## Fixed point to float :
https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

## Inheritance : (chapter 17 & 18)
https://www.learncpp.com/cpp-tutorial/introduction-to-inheritance/

## Pure Virtual Functions and Abstract Classes in C++ :
https://www.tutorialspoint.com/pure-virtual-functions-and-abstract-classes-in-cplusplus

## The Four Polymorphisms in C++ :
https://catonmat.net/cpp-polymorphism

## Interfaces :
  An object-oriented system might use an abstract base class to provide a common and standardized interface appropriate for all the external applications.
  
https://www.tutorialspoint.com/cplusplus/cpp_interfaces.htm

## Abstract vs Interface :
http://www.cplusplus.com/forum/beginner/157568/

## Upcasting
Upcasting is converting a derived-class reference or pointer to a base-class. In other words, upcasting allows us to treat a derived type as though it were its base type. It is always allowed for public inheritance, without an explicit type cast. This is a result of the is-a relationship between the base and derived classes.
```
class Parent {
public:
  void sleep() {}
};

class Child: public Parent {
public:
  void gotoSchool(){}
};

int main( ) 
{ 
  Parent parent;
  Child child;

  // upcast - implicit type cast allowed
  Parent *pParent = &child; 

  // downcast - explicit type case required 
  Child *pChild =  (Child *) &parent;

  pParent -> sleep();
  pChild -> gotoSchool();
    
  return 0; 
}
```
## Virtual destructor :
https://www.geeksforgeeks.org/virtual-destructor/

## Colored output in C++ :
https://stackoverflow.com/questions/9158150/colored-output-in-c
```
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
```

## NULL vs nullptr
nullptr is a keyword that represents zero as an address (its type is considered a pointer-type), while NULL is the value zero as an int . If you're writing something where you're referring to the zero address, rather than the value zero, you should use nullptr 
## Exceptions
Exception handling provides a mechanism to decouple handling of errors or other exceptional circumstances from the typical control flow of your code.
Using return codes causes your control flow and error flow to be intermingled, constraining both. Exceptions in C++ are implemented using three keywords that work in conjunction with each other: throw, try, and catch.
The exception caused the execution path to jump immediately to the exception handler.
__*try :*__ Look for exceptions that occur within try block and route to attached catch block(s).
https://www.learncpp.com/cpp-tutorial/the-need-for-exceptions/

# virtual const char* what() const throw():
throw() means that you promise to the compiler that this function will never allow an exception to be emitted. This is called an exception specification, and (long story short) is useless and possibly misleading.(https://stackoverflow.com/questions/5230463/what-does-this-function-declaration-mean-in-c).
# Pointers to members
https://www.ibm.com/docs/en/i/7.4?topic=only-pointers-members-c

##  Type Casting ! 
1. const_cast : https://www.geeksforgeeks.org/const_cast-in-c-type-casting-operators/#
```
//Undefined behavior to modify a value which is initially declared as const. 
#include <iostream>
using namespace std;

int fun(int* ptr)
{
  *ptr += 10;
	return (*ptr);
}

int main(void)
{
	const int val = 10;
	const int *ptr = &val;
	int *ptr1 = (int *)(ptr);
  
	cout << fun(ptr1) << endl;
   cout <<"val "<< val << "&var " << &val << endl;
     cout << "*ptr " << *ptr << "ptr " << ptr << endl;
	return 0;
}
//output
//20
//val 10 &var 0x7ffe87171804
//*ptr 20 ptr 0x7ffe87171804
```
2. static_cast
https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/?ref=lbp
## Volatile keyword :

https://www.youtube.com/watch?v=6tIWFEzzx9I

## Make existing code run faster, with compiler optimizations :
https://www.youtube.com/watch?v=U161zVjv1rs
https://www.commandlinux.com/man-page/man1/time.1.html

## Learn GDB in 60 seconds

https://www.youtube.com/watch?v=mfmXcbiRs0E

## typeid operator :

https://en.cppreference.com/w/cpp/language/typeid

https://en.cppreference.com/w/cpp/types/type_index 
```
#include <iostream>
#include <typeinfo>
#include <typeindex>
#include <unordered_map>
#include <string>
#include <memory>
 
struct A {
    virtual ~A() {}
};
 
struct B : A {};
struct C : A {};
 
int main()
{
    std::unordered_map<std::type_index, std::string> type_names;
 
    type_names[std::type_index(typeid(int))] = "int";
    type_names[std::type_index(typeid(double))] = "double";
    type_names[std::type_index(typeid(A))] = "A";
    type_names[std::type_index(typeid(B))] = "B";
    type_names[std::type_index(typeid(C))] = "C";
 
    int i;
    double d;
    A a;
 
    // note that we're storing pointer to type A
    std::unique_ptr<A> b(new B);
    std::unique_ptr<A> c(new C);
 
    std::cout << "i is " << type_names[std::type_index(typeid(i))] << '\n';
    std::cout << "d is " << type_names[std::type_index(typeid(d))] << '\n';
    std::cout << "a is " << type_names[std::type_index(typeid(a))] << '\n';
    std::cout << "*b is " << type_names[std::type_index(typeid(*b))] << '\n';
    std::cout << "*c is " << type_names[std::type_index(typeid(*c))] << '\n';
}
```
## Dynamic Cast :
https://www.geeksforgeeks.org/dynamic-_cast-in-cpp/

https://www.youtube.com/watch?v=wE4beL95pIo
```
Dynamic Cast: A cast is an operator that converts data from one type to another type. 
In C++, dynamic casting is mainly used for safe downcasting at run time. 
To work on dynamic_cast there must be one virtual function in the base class.
A dynamic_cast works only polymorphic base class because it uses this information to decide safe downcasting.
```
## operator overloading :

https://en.cppreference.com/w/cpp/language/operators

## Reference :
https://www.geeksforgeeks.org/references-in-c/
