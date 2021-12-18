/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 10:56:43 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/18 19:29:36 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stack>
#define RESET "\033[0m"
#define RED "\033[31m"	 /* Red */
#define WHITE "\033[37m" /* White */
#define CYAN "\033[36m"	 /* Cyan */
#define MAGENTA "\033[35m"      /* Magenta */
#define GREEN   "\033[32m"      /* Green */


template <typename T>
class MutantStack : public std::stack<T>
{
	private:
		typedef typename std::stack<T>::container_type	container_type;
	public:
		typedef typename container_type::iterator		iterator;
		MutantStack(void);
		iterator	begin(void);
		iterator	end(void);
		~MutantStack(void);
};

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (std::stack<T>::c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (std::stack<T>::c.end());	
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}
