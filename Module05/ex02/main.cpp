/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:24:38 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 01:59:50 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	ShrubberyCreationForm	SCF("Home");
	RobotomyRequestForm		RRF("School");
	PresidentialPardonForm	PPF("Ministry");
	Bureaucrat				B1("B1", 1);
	Bureaucrat				B75("B75", 75);
	Bureaucrat				B137("B137", 137);
	Bureaucrat				B150("B150", 150);
	
	cout << BOLDCYAN << "\nSign the diffrents forms :" << RESET << endl;
	B150.signForm(SCF);
	B1.signForm(RRF);
	B1.signForm(PPF);
	cout << BOLDCYAN << "\nExecute SCF Form with differents Bureaucrats:" << RESET << endl;
	cout << BOLDMAGENTA << "Required grades: sign 145, exec 137." << RESET << endl;
	B137.signForm(SCF);
	B1.executeForm(SCF);
	B75.executeForm(SCF);
	B137.executeForm(SCF);
	cout << BOLDCYAN << "\nExecute RRF Form with differents Bureaucrats:" << RESET << endl;
	cout << BOLDMAGENTA << "Required grades: sign 72, exec 45." << RESET << endl;
	for (int i = 0; i < 4; i++)
		B1.executeForm(RRF);
	B75.executeForm(RRF);
	B137.executeForm(RRF);
	cout << BOLDCYAN << "\nExecute PPF Form with differents Bureaucrats:" << RESET << endl;
	cout << BOLDMAGENTA << "Required grades: sign 25, exec 5." << RESET << endl;
	B1.executeForm(PPF);
	B75.executeForm(PPF);
	B137.executeForm(PPF);
	cout << endl;
	return (0);
}