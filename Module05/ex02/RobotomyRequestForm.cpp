/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:01 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 12:49:20 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RRF::RRF(void) :
Form("RobotomyRequestForm", "undefined", 72, 45)
{
	cout << "RRF::Default constructor called." << endl;
}

RRF::RRF(string const &target) :
Form("RobotomyRequestForm", target, 72, 45)
{
	cout << "RRF::Default constructor called." << endl;
}

RRF::RRF(RRF const &src) : Form("RobotomyRequestForm", "undefined", 72, 45)
{
	cout << "RRF::Copy destructor called." << endl;
	*this = src;
}

RRF		&RRF::operator=(RRF const &src)
{
	cout << "RRF::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
}

void	RRF::robotomize(void) const
{
	static int var;

	if (var++ % 2)
		cout << get_target() << " has been robotomized successfully." << endl;
	else
		cout << "It’s a failure" << endl;
}

RRF::~RRF(void)
{
	cout << "RRF::Destructor called." << endl;
}
