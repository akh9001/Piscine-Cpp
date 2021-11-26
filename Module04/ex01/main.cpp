/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:50:05 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/23 07:52:48 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define RESET   "\033[0m"
#define BOLDGREEN   "\033[1m\033[32m"

int main(void)
{
	cout << BOLDGREEN << "\n Creating an array of diffrents animal & delete it !\n" << RESET << endl;
	{
		Animal	*Animals[4];

		for (int i = 0; i < 4; i++)
		{
			if (i < 2)
				Animals[i] = new Dog();
			else
				Animals[i] = new Cat();
		}
		for (int i = 0; i < 4; i++)
		{
			cout << "Animal[" << i << "] ";
			Animals[i]->makeSound();
		}
		for (int i = 0; i < 4; i++)
			delete Animals[i];
	}
	cout << BOLDGREEN << "\nTesting Deep Copy !\n" << RESET << endl;
	Cat	Dahmis;
	{
		Cat	Gray;
		
		Gray = Dahmis;
		Gray.getType();
		cout << "\n\nGray s idea before : " << Gray.getBrain()->getIdea(25) << endl;
		cout << "Dahmis s idea before : " << Dahmis.getBrain()->getIdea(25) << endl;
		Gray.getBrain()->setIdea(25, "25 th Gray idea");
		cout << "Gray s idea after : " << Gray.getBrain()->getIdea(25) << endl;
	}
		cout << "Dahmis s idea after : " << Dahmis.getBrain()->getIdea(25) << endl;
		cout << BOLDGREEN << "\nTesting Virtual destructor !\n" << RESET << endl;
	{
		Animal *animal = new Dog();
		animal->makeSound();
		delete animal;
	}
	return (0);
}