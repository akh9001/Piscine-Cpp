/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 09:34:36 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 16:46:40 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include "contact.hpp"

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
