/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 00:39:33 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 02:34:30 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		Intern &operator=(Intern const &rhs);
		Form	*clone_PPF(const string &target);
		Form	*clone_RRF(const string &target);
		Form	*clone_SCF(const string &target);
		Form	*makeForm(const string &name, const string &target);
		~Intern(void);
};