/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 10:29:42 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 19:29:40 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	string	cmd;
	Phonebook	lst;
	
	while (1)
	{
		cout << "Enter your command !" << endl;
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