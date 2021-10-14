/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:50:39 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/14 19:03:28 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# define string std::string
# define cout	std::cout
# define endl	std::endl

class Weapon
{
	private:
		string	_type;
	public:
		Weapon(string type);
		~Weapon(void);
		const string&	getType(void) const;
		void			setType(string type);
};
