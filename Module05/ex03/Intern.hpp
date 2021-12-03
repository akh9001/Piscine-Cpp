/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:39:33 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 01:39:37 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

typedef enum
{
	PresidentialPardonForm,
	RobotomyRequestForm,
	ShrubberyCreationForm
}		level;

typedef struct	s_enumToString
{
	level	lvl;
	string	str;
}				t_enumToString;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		Form	*makeForm(const string &name, const string &target);
		~Intern();
};
