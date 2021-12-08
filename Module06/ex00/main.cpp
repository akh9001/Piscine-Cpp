/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 18:05:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/08 15:21:26 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <ctype.h>
#include <iostream>
#include <exception>
#define RESET   	"\033[0m"
#define WHITE   	"\033[37m"
#define RED     	"\033[31m"
#define cout		std::cout
#define cerr		std::cerr
#define endl		std::endl
#define atof		std::atof
#define fixed		std::fixed
#define string		std::string
#define	exception	std::exception

void	convert_to_char(float f, const char *str)
{
	char	c;
	string	s;

	c = static_cast <char> (f);
	atoi(str);
	cout << "char	: ";
	if (!isprint(c))
	{
		if (errno == 22)
			s = "impossible";
		else
			s = "Non displayable";
	}
	else
		s = string(1, c);
	cout << s << endl;
}

void	convert_to_int(float f, const char *s)
{
	int		i;

	i = static_cast <int>(f);
	atoi(s);
	if (errno == 22)
		cout << "int	: impossible" << endl;
	else
		cout << "int	: " << i << endl;
}

int	main(int argc, char **argv)
{
	
	float	f;
	double	d;

	if (argc != 2)
	{
		cerr << RED << "ERROR : Must enter only ONE argument !" << RESET << endl;
		return (1);
	}

	d = atof(argv[1]);
	f = static_cast <float>(d);
	
	cout << WHITE;
	convert_to_char(d, argv[1]);
	convert_to_int(d, argv[1]);
	cout.precision(1);
	cout << fixed;
	cout << "float	: " << f << "f" << endl;
	cout << "double	: " << d << endl;
	return (0);
}
