/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:57:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/08 09:33:37 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>     // std::cout, std::endl
#include <iomanip>     // std::setw
#include <string.h>
// #include <stdio.h>
// using namespae std;

int main () {
	std::string str = "1234567891011";
	size_t	len;
	str = str.substr(0, 10);
	len = str.size();
	str[len - 1] = '.';
	std::cout << "|";
	std::cout << std::setw(10);
	std::cout << str << "|" << "hello" << "|" << std::endl;
	std::string str1 = "Apples are red";
	std::string str2 = str1.substr(11, 3);
	std::string str3 = str1.substr(0, 6);
	
	std::cout << "Substring starting at position 11 and length 3 is: " << str2 <<std::endl;
	std::cout << "Substring starting at position 0 and length 6 is: " << str3;
	return 0;
}