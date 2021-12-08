/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:45:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/08 17:50:00 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

typedef	struct s_data
{
	int			y;
	float		x;
	string		s;	
}				Data;

void	print_mystruct(Data x)
{
	cout << WHITE;
	cout << "Data informations : " << endl;
	cout << "Int	: " << x.y << endl;
	cout << "Float	: " << x.x << endl;
	cout << "String  : " << x.s << endl;
	cout << RESET;
}

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	*holder;
	holder = reinterpret_cast<uintptr_t *> (ptr);
	return (*holder);
}

Data* deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *> (raw);
	return (ptr);
}

int main(void)
{
	Data		data;
	Data		*ptr;
	uintptr_t	data_holder;

	data.s = "Elona";
	data.x = 16.45f;
	data.y = 20;
	cout << MAGENTA <<  "Data structor Before Serialization :" << RESET << endl;
	print_mystruct(data);
	data_holder = serialize(&data);
	ptr = deserialize(data_holder);
	cout << MAGENTA <<  "Data structor After Serialization :" << RESET << endl;
	print_mystruct(data);
	return(0);
}