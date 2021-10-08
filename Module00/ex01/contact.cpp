/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:43:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 19:33:13 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::display_contact(void)
{
	cout << "First Name : " << this->_firstname << endl;
	cout << "Last Name : " << this->_lastname << endl;
	cout << "Nickname : " << this->_nickname << endl;
	cout << "Phone Number : " << this->_phone_number << endl;
	cout << "Darkest Secret : " << this->_darkest_secret << endl;
}

void	Contact::set_contact(void)
{
	cout << "First Name :" << endl;
	getline(cin, this->_firstname);
	cout << "Last Name :" << endl;
	getline(cin, this->_lastname);
	cout << "Nickname :" << endl;
	getline(cin, this->_nickname);
	cout << "Phone Number :" << endl;
	getline(cin, _phone_number);
	cout << "Darkest Secret :" << endl;
	getline(cin, this->_darkest_secret);
}

string	str_wide_10(string	str)
{
	int		len;

	len = str.size();
	if (len >= 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';			
	}
	return (str);
}

void	Contact::print_contact_fields(void) const
{
	string	str;
	
	str = str_wide_10(this->_firstname);
	cout << setw(10) << str << "|";
	str = str_wide_10(this->_lastname);
	cout << setw(10) << str << "|";
	str = str_wide_10(this->_nickname);
	cout << setw(10) << str << endl;
}
