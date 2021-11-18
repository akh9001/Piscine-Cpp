/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:05:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/18 17:01:25 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#define	cout	std::cout
#define	cin		std::cin
#define	endl	std::endl
#define	string	std::string

class WrongAnimal
{
	protected:
		string	type;
	public:
		WrongAnimal(void);
		WrongAnimal(string type);
		WrongAnimal(WrongAnimal const &src);
		WrongAnimal	&operator=(WrongAnimal const &rhs); //rhs : right hand side
		string	getType(void) const;
		void	setType(string const & type);
		void	makeSound(void) const;
		~WrongAnimal(void);
};
