/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 19:33:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <iomanip>
# include <string>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define string		std::string
# define getline	std::getline
# define setw		std::setw

class Contact
{
	public:
		Contact();
		~Contact(void);
		void		set_contact(void);
		void		display_contact(void);
		void		print_contact_fields(void) const;
		// string		get_firstname(void) const;
		// string		get_lastname(void) const;
		// string		get_nickname(void) const;
		// string		get_phone_number(void) const;
		// string		get_darkest_secret(void) const;

	private:
		string		_firstname;
		string		_lastname;
		string		_nickname;
		string		_phone_number;
		string		_darkest_secret;
};

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void			add(void);
		void			display_list_contact(void) const;
		void			search(void) const;
		static int		get_total_cont(void);
	private:
		Contact			_contact[8];
		static int		_total_cont;
		static int		_set_total_cont();
};

string					str_wide_10(string	str);