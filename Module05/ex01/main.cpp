/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:24:38 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/04 12:05:37 by akhalidy         ###   ########.fr       */
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
		cout << BOLDCYAN << "Create a Form with grades too high/low.";
		cout << RESET << endl;
		Form	F2("test2", 20, 512);
		Form	F1("test1", -2, 12);
	}
	catch(const exception& e)
	{
		cerr << RED << e.what() << RESET << endl;
	}
	
	try
	{
		cout << BOLDCYAN << "\nCreate a valid obj from Form & test it:" << RESET << endl;
		Form		F3("test3", 28, 2);
		Bureaucrat	B1("B1", 1);
		Bureaucrat	B2("B2", 150);
		Bureaucrat	B3("B3", 28);
		cout << F3;
		cout << CYAN << "Test 0" << RESET << endl;
		F3.beSigned(B1);
		cout << CYAN << "Test 1" << RESET << endl;
		F3.beSigned(B3);
		cout << CYAN << "Test 2" << RESET << endl;
		F3.beSigned(B2);
	}
	catch (const exception& e)
	{
		cerr << RED << e.what() << RESET << endl;
	}
	return (0);
}