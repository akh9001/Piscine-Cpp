
// #include<iostream>
// using namespace std;
  
// class A
// {
//   int x;
// public:
//   void setX(int i) {x = i;}
//   void print() { cout << x; }
// };
  
// class B:  virtual public A
// {
// public:
//   B()  { setX(10); }
// };
  
// class C:  virtual public A  
// {
// public:
//   C()  { setX(20); }
// };
  
// class D: public C, public B {
// };
  
// int main()
// {
//     D d;
//     d.print();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Person {
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
//     Person()     { cout << "Person::Person() called" << endl;   }
// };
  
// class Faculty : virtual public Person {
// public:
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
// };
  
// class Student : virtual public Person {
// public:
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
// };
  
// class TA : public Faculty, public Student  {
// public:
//     TA(int x):Student(x), Faculty(x), Person(x)   {
//         cout<<"TA::TA(int ) called"<< endl;
//     }
// };
  
// int main()  {
//     TA ta1(30);
// }


// #include<iostream>
// using namespace std;
// class Person {
//    // Data members of person 
// public:
//     Person(int x)  { cout << "Person::Person(int ) called" << endl;   }
// };
  
// class Faculty : public Person {
//    // data members of Faculty
// public:
//     Faculty(int x):Person(x)   {
//        cout<<"Faculty::Faculty(int ) called"<< endl;
//     }
// };
  
// class Student : public Person {
//    // data members of Student
// public:
//     Student(int x):Person(x) {
//         cout<<"Student::Student(int ) called"<< endl;
//     }
// };
  
// class TA : public Faculty, public Student  {
// public:
//     TA(int x):Student(x), Faculty(x)   {
//         cout<<"TA::TA(int ) called"<< endl;
//     }
// };
  
// int main()  {
//     TA ta1(30);
// }
// #include <iostream>
// #include <string_view>

// class A
// {
// public:
//     virtual std::string_view getName() const { return "A"; }
// };

// class B: public A
// {
// public:
//     virtual std::string_view getName() const { return "B"; }
// };

// class C: public B
// {
// public:
//     virtual std::string_view getName() const { return "C"; }
// };

// class D: public C
// {
// public:
//     virtual std::string_view getName() const { return "D"; }
// };

// int main()
// {
//     C c;
//     A& rBase(c);
//     std::cout << "rBase is a " << rBase.getName() << '\n';

//     return 0;
// }

// #include <string_view>
// #include <iostream>

// class A
// {
// public:
// 	virtual std::string_view getName() { return "A"; }
// };

// class B : public A
// {
// public:
// 	// note use of final specifier on following line -- that makes this function no longer overridable
// 	std::string_view getName() final { return "B"; } // okay, overrides A::getName()
// };

// class C : public B
// {
// public:
// 	std::string_view getName()  { return "C"; } // compile error: overrides B::getName(), which is final
// };

// int main()
// {
//     C c;
//     A& rBase(c);
//     std::cout << "rBase is a " << rBase.getName() << '\n';

//     return 0;
// }

// Consider the following example:

#include <iostream>
// class Base
// {
// public:
//     ~Base() // note: not virtual
//     {
//         std::cout << "Calling ~Base()\n";
//     }
// };

// class Derived: public Base
// {
// private:
//     int* m_array;

// public:
//     Derived(int length)
//       : m_array( new int[length] )
//     {
//     }

//     ~Derived() // note: not virtual (your compiler may warn you about this)
//     {
//         std::cout << "Calling ~Derived()\n";
//         delete[] m_array;
//     }
// };

// int main()
// {
//     Derived *derived { new Derived(5) };
//     Base *base { derived };

//     delete base;
// 	// delete derived;
//     return 0;
// }
using namespace std;
class Base
{
public:
    //VirtualTable* __vptr;
    virtual void function1() {cout << "Base:: f1"<< endl;};
    virtual void function2() {cout << "Base:: f2"<< endl;};
};

class D1: public Base
{
public:
    virtual void function1() {cout << "D1:: f1"<< endl;};
};

class D2: public Base
{
public:
    virtual void function2() {cout << "D2:: f2"<< endl;};
};
int main()
{
    D1	d1;
	D2	d2;
    Base* dPtr = &d1;
    dPtr->function1();
    dPtr->function2();
	dPtr = &d2;
	dPtr->function1();
    dPtr->function2();
	Base b;
    Base* bPtr = &b;
	cout << "########" << endl;
    bPtr->function1();
    return 0;
}