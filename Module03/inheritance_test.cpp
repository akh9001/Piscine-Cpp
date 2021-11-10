
#include<iostream>
using namespace std;
  
class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
  
class B:  virtual public A
{
public:
  B()  { setX(10); }
};
  
class C:  virtual public A  
{
public:
  C()  { setX(20); }
};
  
class D: public C, public B {
};
  
int main()
{
    D d;
    d.print();
    return 0;
}

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