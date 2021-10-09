/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/09 16:33:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <iomanip>
# include <string>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define setw		std::setw
# define stoi		std::stoi
# define isdigit	std::isdigit
# define string		std::string
# define getline	std::getline
# define GREEN 		"\e[1;32m"
# define RED 		"\e[1;31m"
# define WHITE 		"\e[1;37m"
# define YELLOW 	"\e[1;33m"
# define BLUE 		"\e[1;34m"
# define PURPLE 	"\033[1;35m"
# define DEFAULT	"\e[0;37m"
class Contact
{
	public:
		Contact();
		~Contact(void);
		void		set_contact(void);
		void		display_contact(void) const;
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
		static int		_last_entry;
		static int		_set_total_cont();
};

string					str_wide_10(string	str);
int						is_number(string str);