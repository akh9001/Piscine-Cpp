// #include <iostream>

// int main()
// {
// 	int a = 5;
// 	int &b = a;
// 	int c = 15;


// 	a++;
// 	std::cout << a << "\n";
// 	b = c;
// 	std::cout << b << "\n";
// 	std::cout << a << "\n";
// }
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//    char a[5]="abc";
    
//     cout<<sizeof(a);
//     cout<<endl;
    
//     string s;
//     s=a;
//     cout<<s.length();
//     cout<<endl;
//     cout<<s.size();
//     cout<<endl;
    
//     string b[3];
//     cout<<"Size of string :"<<s.size()<<endl;
//     b[0]="abcd";
//     cout<<"Size of string :"<<s.length();
    // getch();
//   	return 0;
// }

// inserting into a string
#include <iostream>
#include <string>

int main ()
{
  std::string str="to be question";
  std::string str2="the ";
  std::string str3="or not to be";
  std::string::iterator it;

  // used in the same order as described above:
  str.insert(6,str2);                 // to be (the )question
//   str.insert(6,str3,3,4);             // to be (not )the question
//   str.insert(10,"that is cool",8);    // to be not (that is )the question
//   str.insert(10,"to be ");            // to be not (to be )that is the question
//   str.insert(15,1,':');               // to be not to be(:) that is the question
//   it = str.insert(str.begin()+5,','); // to be(,) not to be: that is the question
//   str.insert (str.end(),3,'.');       // to be, not to be: that is the question(...)
//   str.insert (it+2,str3.begin(),str3.begin()+3); // (or )

  std::cout << str << '\n';
  return 0;
}