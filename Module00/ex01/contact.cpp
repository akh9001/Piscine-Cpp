/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:43:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 17:22:37 by akhalidy         ###   ########.fr       */
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

void	Contact::get_contact(void)
{
	std::cout << "First Name : " << this->_firstname << std::endl;
	std::cout << "Last Name : " << this->_lastname << std::endl;
	std::cout << "Nickname : " << this->_nickname << std::endl;
	std::cout << "Phone Number : " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret : " << this->_darkest_secret << std::endl;
}

void	Contact::set_contact(void)
{
	std::cout << "First Name :" << std::endl;
	std::getline(std::cin, this->_firstname);
	std::cout << "Last Name :" << std::endl;
	std::getline(std::cin, this->_lastname);
	std::cout << "Nickname :" << std::endl;
	std::getline(std::cin, this->_nickname);
	std::cout << "Phone Number :" << std::endl;
	std::getline(std::cin, _phone_number);
	std::cout << "Darkest Secret :" << std::endl;
	std::getline(std::cin, this->_darkest_secret);
}
