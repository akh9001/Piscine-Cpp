// #include <iostream>
// using namespace std;

// int main(void)
// {
// 	int a1 = 40;
// 	const int* b1 = &a1;
// 	char* c1 = (char *)(b1);
//   cout << *c1 << endl;
// 	*c1 = 'A';
//   cout << *c1 << endl;
// 	return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;
// class Int {
//     int x;
  
// public:
//     Int(int x_in = 0) : x(x_in)
//     {
//         cout << "Conversion Ctor called" << endl;
//     }
//     operator string()
//     {
//         cout << "Conversion Operator" << endl;
//         return to_string(x);
//     }
// };
// int main()
// {
//     Int obj(3);
//     // string str = obj;
//     // obj = 20;
//     string str2 = static_cast<string>(obj);
//     obj = static_cast<Int>(30);
//     return 0;
// }

#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atof */
#include <math.h>       /* sin */
#include <iostream>
int main ()
{
//   double n,m;
//   double pi=3.1415926535;
//   char buffer[256];
//   printf ("Enter degrees: ");
//   fgets (buffer,256,stdin);
//   n = atof (buffer);
double n;
int	d ;
	n = std::atof ("nan");
	d = static_cast <int> (n);
	// std::cout.precision(2);
	// std::cout << std::fixed << n << std::endl;
	std::cout << d << std::endl;
	std::cout << errno << std::endl;
//   m = sin (n*pi/180);
//   printf ("The sine of %f degrees is %f\n" , n, m);
  return 0;
}
