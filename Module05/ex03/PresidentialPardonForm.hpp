/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:11 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 16:42:43 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(string const &target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		PresidentialPardonForm	&operator=(PresidentialPardonForm const &rhs);
		void	pardon(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~PresidentialPardonForm(void);
};
