/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:11 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/28 07:48:44 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#define	 PPF PresidentialPardonForm

class PPF : public Form
{
	private:
		
	public:
		class Unsigned : public exception
		{
			public :
			virtual const char *what(void) const throw();
		};
		PPF(void);
		PPF(string target);
		PPF(PPF const &src);
		PPF	&operator=(PPF const &rhs);
		void	pardon(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~PPF(void);
};
