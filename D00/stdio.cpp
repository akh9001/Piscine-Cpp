/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stdio.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 12:29:50 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/06 20:25:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	char	buff[500];
	int		age;
	char	permission;
	using namespace Hello;

	cout << "Hello Asmaa!" <<std::endl;
	std::cout << "Input a world : ";
	std::cin >> buff >> age >> permission;
	std::cout << "You entered: [" << buff << "]"<< "[" << age << "]"<< "[" << permission << "]"<< std::endl;
	cout;
}
