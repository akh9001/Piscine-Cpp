#include <iostream>

int main()
{
	int a = 5;
	int &b = a;
	int c = 15;


	a++;
	std::cout << a << "\n";
	b = c;
	std::cout << b << "\n";
	std::cout << a << "\n";
}