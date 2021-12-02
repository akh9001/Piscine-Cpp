/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:46:11 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/02 15:53:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>
#include <string>
#define	cout		std::cout
#define	cin			std::cin
#define	cerr		std::cerr
#define	endl		std::endl
#define	string		std::string
#define	exception	std::exception
#define	ostream		std::ostream
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		string const	_name;
		int				_grade;
	public:
		class HighException : public exception
		{
			public :
			virtual const char *what(void) const throw();
		};
		class LowException : public exception
		{
			public :
			virtual const char *what(void) const throw();
		};
		Bureaucrat(void);
		Bureaucrat(string const name, int grade);
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		string const	getName(void) const;
		int		getGrade(void) const;
		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(Form &form);
		void	executeForm(Form const & form);
		~Bureaucrat();
};

ostream &operator << (ostream &out, const Bureaucrat &src);
