/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:24:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/17 21:22:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void	Karen::debug(void)
{
	cout << "[ DEBUG ]" << endl; 
	cout << "I love to get extra bacon ";
	cout << "for my 7XL-double-cheese-triple-pickle-special-ketchup burger.";
	cout << " I just love it!" << endl;
}

void	Karen::info(void)
{
	cout << "[ INFO ]" << endl; 
	cout << "I cannot believe adding extra bacon cost more money.";
	cout << "You don’t put enough! If you did ";
	cout << "I would not have to ask for it!" << endl;
}

void	Karen::warning(void)
{
	cout << "[ WARNING ]" << endl; 
	cout << "I think I deserve to have some extra bacon for free.";
	cout << " I’ve been coming here for years and you just started";
	cout << " working here last month." << endl;
}

void	Karen::error(void)
{
	cout << "[ ERROR ]" << endl; 
	cout << "This is unacceptable, I want to speak to the manager now" << endl;
}

int		return_lvl(t_enumToString *tab, string level)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (level == tab[i].str)
			return(tab[i].lvl);
		i++;
	}
	return(-1);
}

void	Karen::complain(string level)
{
	t_enumToString tab[]= {
		{DEBUG, "DEBUG"},
		{INFO, "INFO"},
		{WARNING, "WARNING"},
		{ERROR, "ERROR"}
	};
	
	switch(return_lvl(tab, level))
	{
		case DEBUG : debug();
					break;
		case INFO : info();
					break;
		case WARNING : warning();
					break;
		case ERROR : error();
					break;
		default :
			cout << "[ Probably complaining about insignificant problems ]";
	}
}