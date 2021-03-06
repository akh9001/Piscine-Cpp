/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:17:03 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/12 18:55:33 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "main_header.hpp"

class Contact
{
	public:
		Contact();
		~Contact(void);
		void		set_contact(void);
		void		display_contact(void) const;
		void		print_contact_fields(void) const;

	private:
		string		_firstname;
		string		_lastname;
		string		_nickname;
		string		_phone_number;
		string		_darkest_secret;
};
