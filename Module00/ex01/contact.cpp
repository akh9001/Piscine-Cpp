/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:43:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 16:48:07 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

Contact::Contact()
{
	return ;
}

Contact::~Contact()
{
	return ;
}

void	Contact::display_contact(void) const
{
	cout << "	First Name : " << this->_firstname << endl;
	cout << "	Last Name : " << this->_lastname << endl;
	cout << "	Nickname : " << this->_nickname << endl;
	cout << "	Phone Number : " << this->_phone_number << endl;
	cout << "	Darkest Secret : " << this->_darkest_secret << endl;
}

void	Contact::set_contact(void)
{
	string	err;

	err = "Required field! Please, enter First Name : ";
	if (check_required_str_field(this->_firstname, "First Name : ", err))
		return ;
	err = "Required field! Please, enter Last Name : ";
	if (check_required_str_field(this->_lastname, "Last Name : ", err))
		return ;
	cout << "Nickname : ";
	getline(cin, this->_nickname);
	err = "Required field! Please, enter Phone Number : ";
	if (check_required_str_field(this->_phone_number, "Phone Number : ", err))
		return ;
	while (is_number(this->_phone_number))
	{
		cout << RED << "Wrong phone Number! Please, enter a valid Phone Number : " << DEFAULT;
		getline(cin, this->_phone_number);
	}
	cout << "Darkest Secret : ";
	getline(cin, this->_darkest_secret);
}

void	Contact::print_contact_fields(void) const
{
	string	str;
	
	str = str_wide_10(this->_firstname);
	cout << setw(10) << str << "|";
	str = str_wide_10(this->_lastname);
	cout << setw(10) << str << "|";
	str = str_wide_10(this->_nickname);
	cout << setw(10) << str << "|" << endl;
}
