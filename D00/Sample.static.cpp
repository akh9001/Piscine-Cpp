/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sample.static.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:27:02 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/05 20:41:56 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.static.hpp"

Static::Static()  
{
	std::cout << "Constructor called!" << std::endl;
	Static::_nbInst += 1;
	return;
}

Static::~Static(void)
{
	std::cout << "Destuctor called!" << std::endl;
	Static::_nbInst -= 1;
	return;
}

int	Static::getNbInst(void)
{
	return Static::_nbInst;
}

//Initialisation d attribut non membre (static var in a class)

int			Static::_nbInst = 0;