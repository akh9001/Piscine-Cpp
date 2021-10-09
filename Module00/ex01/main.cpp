/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:29:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/09 13:38:31 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	string	cmd;
	Phonebook	lst;

	cout << WHITE << "Available commands : " << "SEARCH, " << "ADD, " << "EXIT.";
	cout << DEFAULT << endl;
	
	while (!cin.eof())
	{
		cout << GREEN << " Enter your command  > " << DEFAULT;
		getline(cin, cmd);
		if (!cmd.compare("EXIT"))
			return (0);
		if (!cmd.compare("ADD"))
			lst.add();
		else if (!cmd.compare("SEARCH"))
			lst.search();
		else
			cout << "WRONG COMMAND !" << endl;
		
	}
	return (0);
}