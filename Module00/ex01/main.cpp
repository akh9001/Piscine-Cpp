/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:29:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 15:56:23 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	std::string	cmd;
	Phonebook	lst;
	
	while (1)
	{
		std::cout << "Enter your command !" << std::endl;
		std::getline(std::cin, cmd);
		if (!cmd.compare("EXIT"))
			return (0);
		if (!cmd.compare("ADD"))
			lst.add();
		// else if (!cmd.compare("SEARCH"))
		// 	Phonebook::lst.search();
		else
			std::cout << "WRONG COMMAND !" << std::endl;
		
	}
	return (0);
}