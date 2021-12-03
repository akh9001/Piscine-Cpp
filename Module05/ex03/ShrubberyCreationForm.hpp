/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/02 23:11:57 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <fstream>
#include "Form.hpp"
#define  ofstream	std::ofstream

class ShrubberyCreationForm : public Form
{
	private:
		
	public:
		class FileError: exception
		{
			public :
				virtual const char *what() const throw();
		};
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		void	creat_Shrubbery(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~ShrubberyCreationForm(void);
};
