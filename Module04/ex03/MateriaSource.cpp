/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 02:05:52 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/22 05:15:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	// cout << "MateriaSource::Default constructor called." << endl;
	for (int i = 0; i < 4; i++)
		_source[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	// cout << "MateriaSource::Copy constracter called." << endl;
	*this = src;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	// cout << "MateriaSource::Assignement operator called." << endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
		this->_source[i] = rhs._source[i]->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	for(int i = 0; i < 4; i++)
	{
		if (_source[i] == nullptr)
		{
			_source[i] = m->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i]){
			if (_source[i]->getType().compare(type) == 0)
				return (_source[i]->clone());
		}
	}
	return (0);
}

MateriaSource::~MateriaSource(void)
{
	// cout << "MateriaSource::Destructor called." << endl;
	for (int i = 0; i < 4; i++)
	{
		if (_source[i])
			delete _source[i];
	}
}
