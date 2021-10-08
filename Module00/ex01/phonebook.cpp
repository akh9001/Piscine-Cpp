/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 19:30:47 by akhalidy         ###   ########.fr       */
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

void	Phonebook::display_list_contact(void) const
{
	int		i;

	i = 0;
	cout << setw(11) << "Index|" << setw(11) << "First Name|";
	cout << setw(11) << "Last Name|" << setw(11) << "Nickname|" << endl;
	while (i < 8)
	{
		cout << setw(10) << i << "|";
		_contact[i].print_contact_fields();
		i++;
	}
}

void	Phonebook::search(void) const
{
	display_list_contact();
}