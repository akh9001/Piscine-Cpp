/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 16:18:04 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/19 18:12:36 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	cout << "Brain::Default constructor called." << endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea " + to_string(i);
}

Brain::Brain(Brain const &src)
{
	cout << "Brain::Copy constructor called." << endl;
	*this = src;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	cout << "Brain::Assignement operator called." << endl;
	for (int i = 0; i < 100; i++) {
		// if (rhs.ideas[i] != "" && rhs.ideas[i].c_str())
		// 	this->ideas[i] = rhs.ideas[i].c_str();
		// else
		// 	this->ideas[i] = "";
		this->ideas[i] = rhs.ideas[i];
	}
	return(*this);
}

string	Brain::getIdea(int i) const
{
	return(this->ideas[i]);
}

void	Brain::setIdea(int i, string const &idea)
{
	this->ideas[i] = idea;	
}

Brain::~Brain()
{
	cout << "Brain::Destructor called." << endl;
}
