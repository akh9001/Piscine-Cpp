/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 17:29:37 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
		Contact();
		~Contact(void);
		void	set_contact(void);
		void	get_contact(void);
		
	private:
		std::string		_firstname;
		std::string		_lastname;
		std::string		_nickname;
		std::string		_phone_number;
		std::string		_darkest_secret;
};

class Phonebook
{
	public:
		Phonebook();
		~Phonebook();
		void			add(void);
		void			get_all_contact() const;
		void			search(void) const;
		static int		get_total_cont(void);
	private:
		Contact			_contact[8];
		static int		_total_cont;
		static int		_set_total_cont();
};

