/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:27 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/01 13:00:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#define	 RRF RobotomyRequestForm

class RRF : public Form
{
	private:
		
	public:
		RRF(void);
		RRF(string const &target);
		RRF(RRF const &src);
		RRF	&operator=(RRF const &rhs);
		void	robotomize(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		~RRF(void);
};
