/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:24:38 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/26 20:51:34 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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

int main(void)
{
	try
	{
		cout << BOLDCYAN << "Create a Bureaucrat with a grade too high/low.";
		cout << RESET << endl;
		Bureaucrat	B1("B1", 0);
		Bureaucrat	B3("B3", 200);
	}
	catch(const exception& e)
	{
		std::cerr << RED << e.what() << RESET << endl;
	}
	
	try
	{
		cout << BOLDCYAN << "\nCreate 4 valid obj from Bureauctrat :" << RESET << endl;
		Bureaucrat	B2("B2", 3);
		Bureaucrat	B4("B4", 1);
		Bureaucrat	B5("B5", 150);
		Bureaucrat	Bx;
		cout << BOLDCYAN << "\n TESTING INCREMENTATION :" << RESET << endl;
		Bx = B2;
		Bx.incrementGrade();
		// cout << "BX NAME " << Bx.getName() << endl;
		// cout << "BX GRADE " << Bx.getGrade() << endl;
		cout << B2;
		cout << Bx;
		cout << BOLDCYAN << "\n TESTING DECREMENTATION :" << RESET << endl;
		Bx = B2;
		Bx.decrementGrade();
		// cout << "BX NAME " << Bx.getName() << endl;
		// cout << "BX GRADE "<< Bx.getGrade() << endl;
		cout << B2;
		cout << Bx;
		cout << BOLDMAGENTA << "\n TESTING EXCEPTIONS :\n" << RESET << endl;
		B5.decrementGrade();
		B4.incrementGrade();
	}
	catch (const exception& e)
	{
		std::cerr << RED << e.what() << RESET << endl;
	}
	return (0);
}