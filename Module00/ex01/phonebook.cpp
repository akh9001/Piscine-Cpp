/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/11 13:30:02 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"


//Initialisation d attribut non membre (static var in a class)

int	Phonebook::_total_cont = -1;
int	Phonebook::_last_entry = -1;

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
	if (_total_cont > 7)
		_last_entry = 8;
	else
		_last_entry = _total_cont;
	return (_total_cont);
}

void	Phonebook::display_list_contact(void) const
{
	int		i;

	i = 0;
	cout << endl << WHITE << setw(11) << "Index|" << setw(11) << "First Name|";
	cout << setw(11) << "Last Name|" << setw(11) << "Nickname|" << DEFAULT << endl;
	while (i <= _last_entry)
	{
		cout << setw(10) << i << "|";
		_contact[i].print_contact_fields();
		i++;
	}
	cout << endl;
}

void	Phonebook::search(void) const
{
	string	index;

	display_list_contact();
	if (_last_entry == -1)
	{
		cout << YELLOW << "The PhoneBook Empty ! There is no contact to display !" << DEFAULT << endl << endl;
		return ;
	}
	cout << BLUE << "For more details, please enter tne INDEX of the desirable contact : " << DEFAULT;
	while (check_index(index, _last_entry));
	int in = stoi(index);
	_contact[in].display_contact();
}
