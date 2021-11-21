/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:07:49 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/21 07:17:57 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character
{
	private:
		string	_name;
	public:
		Character(void);
		string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		~Character();
};

Character::Character(/* args */)
{
}

string const &Character::getName() const
{
	return (this->_name);
}

Character::~Character()
{
}
