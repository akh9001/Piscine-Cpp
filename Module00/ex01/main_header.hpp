/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_header.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:27:53 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 16:46:55 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once
# include <iostream>
# include <iomanip>
# include <string>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define setw		std::setw
# define stoi		std::stoi
# define isdigit	std::isdigit
# define string		std::string
# define getline	std::getline
# define GREEN 		"\e[1;32m"
# define RED 		"\e[1;31m"
# define WHITE 		"\e[1;37m"
# define YELLOW 	"\e[1;33m"
# define BLUE 		"\e[1;34m"
# define PURPLE 	"\033[1;35m"
# define DEFAULT	"\e[0;37m"

// Help Function

int				is_number(string str);
string			str_wide_10(string	str);
int				check_required_str_field(string	&str,string msg, string err);
int				check_index(string	&index, int _last_entry);
