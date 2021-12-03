/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:01 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/02 19:13:19 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
Form("RobotomyRequestForm", "undefined", 72, 45)
{
	cout << "RobotomyRequestForm::Default constructor called." << endl;
}

RobotomyRequestForm::RobotomyRequestForm(string const &target) :
Form("RobotomyRequestForm", target, 72, 45)
{
	cout << "RobotomyRequestForm::Default constructor called." << endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form("RobotomyRequestForm", "undefined", 72, 45)
{
	cout << "RobotomyRequestForm::Copy destructor called." << endl;
	*this = src;
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	cout << "RobotomyRequestForm::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
	return(*this);
}

void	RobotomyRequestForm::robotomize(void) const
{
	static int var;

	if (var++ % 2)
		cout << get_target() << " has been robotomized successfully." << endl;
	else
		cout << "It’s a failure" << endl;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!get_signed())
		throw Form::Unsigned(get_name());
	if (executor.getGrade() > this->get_execGrade())
		throw Form::Illegal(get_name());
	robotomize();
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	cout << "RobotomyRequestForm::Destructor called." << endl;
}
