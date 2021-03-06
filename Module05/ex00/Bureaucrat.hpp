/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:46:11 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/26 18:19:10 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>
#include <string>
#define	cout		std::cout
#define	cin			std::cin
#define	endl		std::endl
#define	string		std::string
#define	exception	std::exception
#define	ostream		std::ostream

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
		~Bureaucrat();
};

ostream &operator << (ostream &out, const Bureaucrat &src);
