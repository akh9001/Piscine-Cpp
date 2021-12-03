/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 21:38:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/03 02:58:07 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

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
				string	_msg;
			public :
			HighException(string const &name);
			virtual const char *what() const throw();
			virtual ~HighException() throw();
		};
		class LowException : public exception
		{
			private :
				string	_name;
				string	_msg;
			public :
			LowException(string const &name);
			virtual const char *what() const throw();
			virtual ~LowException() throw();
		};
		class Unsigned : public exception
		{
			private :
				string	_name;
				string	_msg;
			public :
			Unsigned(string const &name);
			virtual const char *what() const throw();
			virtual ~Unsigned() throw();
		};
		class Illegal : public exception
		{
			private :
				string	_name;
				string	_msg;
			public :
			Illegal(string const &name);
			virtual const char *what() const throw();
			virtual ~Illegal() throw();
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
		virtual ~Form(void);
};

ostream		&operator<<(ostream &out, const Form &rhs);
