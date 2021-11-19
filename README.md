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
