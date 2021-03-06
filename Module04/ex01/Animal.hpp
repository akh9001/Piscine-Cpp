/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:05:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/19 14:01:59 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#define	cout		std::cout
#define	cin			std::cin
#define	endl		std::endl
#define	string		std::string
#define to_string	std::to_string

class Animal
{
	protected:
		string	type;
	public:
		Animal(void);
		Animal(string type);
		Animal(Animal const &src);
		Animal	&operator=(Animal const &rhs); //rhs : right hand side
		string	getType(void) const;
		void	setType(string const & type);
		virtual	void	makeSound(void) const;
		virtual ~Animal(void);
};
