/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:24:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/17 18:57:51 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	cout << "I love to get extra bacon ";
	cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	cout << " I just love it!" << endl;
}

void	Karen::info(void)
{
	cout << "I cannot believe adding extra bacon cost more money.";
	cout << "You don’t put enough! If you did ";
	cout << "I would not have to ask for it!" << endl;
}

void	Karen::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free.";
	cout << " I’ve been coming here for years and you just started";
	cout << " working here last month." << endl;
}

void	Karen::error(void)
{
	cout << "This is unacceptable, I want to speak to the manager now" << endl;
}

void	Karen::complain(string level)
{
	void (Karen::*ptr[4]) (void);
	string	str[4];
	
	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";
	for(int i = 0; i < 4; i++)
	{
		if (str[i] == level)
			(this->*ptr[i])();
	}
}