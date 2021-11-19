/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:05:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/19 16:58:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Brain
{
	private:
		string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const &src);
		Brain	&operator=(Brain const &rhs); //rhs : right hand side
		string	getIdea(int i) const;
		void	setIdea(int i, string const &idea);
		virtual ~Brain(void);
};
