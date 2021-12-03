/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:24:38 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 03:07:53 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void)
{
	cout << BOLDCYAN << "\nConstructions:" << RESET << endl;
	Bureaucrat	B("Elona", 1);
	Intern someRandomIntern;
	Form* rrf[4];
	rrf[0] = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	rrf[1] = someRandomIntern.makeForm("RobotomyRequestForm", "42");
	rrf[2] = someRandomIntern.makeForm("ShrubberyCreationForm", "1337");
	rrf[3] = someRandomIntern.makeForm("PresiddonForm", "1337");
	cout << BOLDCYAN << "\nSign diffrents forms by Elona:" << RESET << endl;
	B.signForm(*rrf[0]);
	B.signForm(*rrf[1]);
	B.signForm(*rrf[2]);
	cout << BOLDCYAN << "\nSign execute forms by Elona:" << RESET << endl;
	B.executeForm(*rrf[0]);
	B.executeForm(*rrf[1]);
	B.executeForm(*rrf[2]);
	
	cout << BOLDCYAN << "\nDestructions:" << RESET << endl;
	delete rrf[0];
	delete rrf[1];
	delete rrf[2];
	return (0);
}