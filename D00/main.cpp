/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:02:25 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 12:52:39 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sample.class.hpp"
#include "Sample1.class.hpp"
#include "Sample2.class.hpp"
#include "Sample.visibility.hpp"
#include "Sample.static.hpp"

void	f0(void)
{
	Static	instance;

	std::cout << "Number of instances : " << Static::getNbInst() << std::endl;
	//return ;
}

void	f1(void)
{
	Static	instance;

	std::cout << "Number of instances : " << Static::getNbInst() << std::endl;
	f0();
	return ;
}

int main(void)
{
	// Sample	instance;
	// Sample	instance(3.14);
	// Sample1	instance1('b', 26, 3.37f);
	// Sample2	instance2('a', 25, 2.26f);
	// Visibility	visibility;

	// instance.foo = 42;
	// std::cout << "Instance.foo : " << instance.foo << std::endl;
	// instance.bar();
	// visibility.publicfoo = 42;
	// std::cout << "visibility.publicfoo : " << visibility.publicfoo << std::endl;
	// visibility.publicBar();
	// visibility._privateFoo = 1337;
	// visibility._privateBar();
	// visibility.setPrivateFoo(-14);
	// std::cout << "visibility.getPrivateFoo() : " << visibility.getPrivateFoo() << std::endl;
	// visibility.setPrivateFoo(14);
	// std::cout << "visibility.getPrivateFoo() : " << visibility.getPrivateFoo() << std::endl;
	
	std::cout << "Number of instances : " << Static::getNbInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Static::getNbInst() << std::endl;
	return 0;
}
