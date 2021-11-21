/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 00:18:17 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 08:00:26 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>
#include <string>
#define	cout	std::cout
#define	cin		std::cin
#define	string	std::string
#define	endl	std::endl

class AMateria;
class ICharacter
{
	public:
		ICharacter(void);
		string const & getName(void) const = 0;
		void equip(AMateria* m) = 0;
		void unequip(int idx) = 0;
		void use(int idx, ICharacter& target) = 0;
		~ICharacter(void);
};
