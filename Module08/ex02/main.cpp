/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/18 12:32:08 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/18 19:34:15 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>
// #include <deque>

// int main(void)
// {
// 	// MutantStack<int> mstack;
// 	// std::deque<int> tmp;
// 	// tmp.push_back(0);
// 	// tmp.push_back(1);
// 	// MutantStack<int>::iterator it = tmp.begin();
// 	// while (it != tmp.end())
// 	// {
// 	// std::cout << *it << std::endl;
// 	// ++it;
// 	// }

// }
template<typename T>
void	print_scontainer(T  &obj)
{
	typename T::iterator it = obj.begin();
	typename T::iterator ite = obj.end();
	++it;
	--it;
	std::cout << WHITE;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

template<typename T>
void	clear_stack(T &obj)
{
	typename T::iterator it = obj.begin();
	typename T::iterator ite = obj.end();
	++it;
	--it;
	std::cout << WHITE;
	while (it != ite)
	{
		obj.pop();
		++it;
	}
}

int main()
{
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		std::cout << CYAN << "\nPrint mstack :" << std::endl;
		print_scontainer(mstack);
		std::stack<int> s(mstack);
		std::cout << CYAN << "\nPrint s :" << std::endl;
		print_scontainer(mstack);
		if (mstack == s)
			std::cout  << GREEN << " The stacks are equal !" << std::endl;
		else
			std::cout  << GREEN << " The stacks aren't equal !" << std::endl;
		clear_stack(mstack);
		if (mstack.empty())
			std::cout  << GREEN << " mstack is empty !" << std::endl;
		else
			std::cout  << GREEN << " mstack isn't empty !" << std::endl;
		std::cout << " Size of stack s is : " << s.size() << std::endl;	
	}

	{
		std::list<int> mlst;
	
		std::cout << MAGENTA << "\nTesting the list :" << std::endl;
		mlst.push_back(5);
		mlst.push_back(17);
		std::cout << WHITE << mlst.back() << std::endl;
		mlst.pop_back();
		std::cout << mlst.size() << std::endl;
		mlst.push_back(3);
		mlst.push_back(5);
		mlst.push_back(737);
		//[...]
		mlst.push_back(0);
		std::cout << CYAN << "\nPrint List :" << std::endl;
		print_scontainer(mlst);
		std::cout << CYAN << "\nPrint s :" << std::endl;
		std::list<int> s(mlst);
		print_scontainer(s);
	}
	return 0;
}
