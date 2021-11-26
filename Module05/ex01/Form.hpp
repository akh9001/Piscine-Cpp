/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:38:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/26 23:33:10 by akhalidy         ###   ########.fr       */
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
		Form(string name, bool sign, int signGrade, int execGrade);
		Form	&operator=(const Form &rhs);
		const string	get_name(void) const;
		bool			get_signed(void) const;
		const int		get_signGrade(void) const;
		const int		get_execGrade(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		~Form(void);
};

ostream		&operator<<(ostream &out, const Form &rhs);
