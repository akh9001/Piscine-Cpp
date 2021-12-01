/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 13:01:10 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include "Form.hpp"
#define	 SCF ShrubberyCreationForm
#define  ofstream	std::ofstream

class SCF : public Form
{
	private:
		
	public:
		SCF(void);
		SCF(string const &target);
		SCF(SCF const &src);
		SCF	&operator=(SCF const &rhs);
		void	creat_Shrubbery(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~SCF(void);
};
