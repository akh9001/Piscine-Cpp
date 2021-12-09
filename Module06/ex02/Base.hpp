/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 07:30:05 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/09 07:30:49 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <ctype.h>
#include <iostream>
#include <exception>
#define RESET   	"\033[0m"
#define WHITE   	"\033[37m"
#define RED     	"\033[31m"
#define MAGENTA 	"\033[35m"
#define cout		std::cout
#define cerr		std::cerr
#define endl		std::endl
#define atof		std::atof
#define fixed		std::fixed
#define string		std::string
#define	exception	std::exception

class Base
{
	public :
		virtual ~Base(void);
};
