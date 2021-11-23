/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 00:18:17 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/23 05:59:26 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma	once
#include <iostream>
#include <string>
#define	cout	std::cout
#define	cin		std::cin
#define	string	std::string
#define	endl	std::endl
#include "AMateria.hpp"
class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};
