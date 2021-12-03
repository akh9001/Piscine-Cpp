/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:27 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/02 18:36:39 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		
	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(string const &target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm	&operator=(RobotomyRequestForm const &rhs);
		void	robotomize(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~RobotomyRequestForm(void);
};
