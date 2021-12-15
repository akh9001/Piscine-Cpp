/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:55:47 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/15 20:03:41 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>
#include <vector>
#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define WHITE   "\033[37m"      /* White */
#define CYAN    "\033[36m"      /* Cyan */

class Span
{
	private :
		int				*_tab;
		unsigned int	_N;
	public :
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		Span	&operator=(Span const &rhs);
		void	addNumber(int number);
		
		~Span(void);
};