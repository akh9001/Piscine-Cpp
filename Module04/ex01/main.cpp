/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:50:05 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/19 18:10:05 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#define RESET   "\033[0m"
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */


int main(void)
{
	// cout << BOLDGREEN << "\n Creating an array of diffrents animal & delete it !\n" << RESET << endl;
	// {
		// Animal	*Animals[4];

		// for (int i = 0; i < 4; i++)
		// {
		// 	if (i < 2)
		// 		Animals[i] = new Dog();
		// 	else
		// 		Animals[i] = new Cat();
		// }
		// for (int i = 0; i < 4; i++)
		// {
		// 	cout << "Animal[" << i << "] ";
		// 	Animals[i]->makeSound();
		// }
		// for (int i = 0; i < 4; i++)
			// delete Animals[i];
	// }
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
		cout << "Dahmis s idea before : " << Dahmis.getBrain()->getIdea(25) << endl;
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// delete j;//should not create a leak
	// delete i;
	// return (0);
}