/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 09:43:28 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	Phonebook::_total_cont = -1;

Phonebook::Phonebook()
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

void	Phonebook::add(void)
{
	int	index;

	index = _set_total_cont();
	index %= 8;
	_contact[index].set_contact();
}

int		Phonebook::_set_total_cont()
{
	_total_cont++;
	return (_total_cont);
}

void	display_list_contact(void) const
{
	int		i;
	string	str;

	i = 0;
	while (i < 8)
	{
		_contact[i]._firstname
	}
	
}