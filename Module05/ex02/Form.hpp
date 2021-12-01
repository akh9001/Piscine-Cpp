/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:38:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 20:24:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const string	_name;
		bool			_signed;
		const int		_signGrade;
		const int		_execGrade;
		string			_target;
	public:
		class HighException : public exception
		{
			private :
				string	_name;
			public :
			HighException(string const &name);
			virtual const char *what(void) const throw();
		};
		class LowException : public exception
		{
			private :
				string	_name;
			public :
			LowException(string const &name);
			virtual const char *what(void) const throw();
		};
		class Unsigned : public exception
		{
			private :
				string	_name;
			public :
			Unsigned(string const &name);
			virtual const char *what(void) const throw();
		};
		class Illegal : public exception
		{
			private :
				string	_name;
			public :
			Illegal(string const &name);
			virtual const char *what(void) const throw();
		};
		Form(void);
		Form(const Form &src);
		Form(string const &name, string const &target, int signGrade, int execGrade);
		Form	&operator=(const Form &rhs);
		string	get_name(void) const;
		bool	get_signed(void) const;
		int		get_signGrade(void) const;
		int		get_execGrade(void) const;
		string	get_target(void) const;
		void	set_signed(bool vale);
		void	set_target(string const & target);
		void	beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		~Form(void);
};

ostream		&operator<<(ostream &out, const Form &rhs);
