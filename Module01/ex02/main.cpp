/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 21:26:24 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/13 21:40:59 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define string		std::string

int	main(void)
{
	string	str = "HI THIS IS BRAIN";
	string*	stringPTR = &str;
	string&	stringREF = str;

	// Displaying the address of the str using &str, stringPTR & stringREF
	cout << " The string adress  : " << &str << " ," << stringPTR <<  " ," << &stringREF << endl;
	cout << " The string content : " << str << " ," << *stringPTR << " ," << stringREF << endl;
	return (0);
}
