/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:38:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/28 07:09:13 by akhalidy         ###   ########.fr       */
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
			public :
			virtual const char *what(void) const throw();
		};
		class LowException : public exception
		{
			public :
			virtual const char *what(void) const throw();
		};
		Form(void);
		Form(const Form &src);
		Form(string name, string target, int signGrade, int execGrade);
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
