/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:08:37 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/16 18:55:28 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#define RESET "\033[0m"
#define RED "\033[31m"	 /* Red */
#define WHITE "\033[37m" /* White */
#define CYAN "\033[36m"	 /* Cyan */

class Span
{
	private:
		std::vector<int>	_v;
		unsigned int		_N;
	public:
		Span(void);
		Span(unsigned int n);
		Span(Span const &src);
		Span &operator=(Span const &rhs);
		void addNumber(int number);
		int	 shortestSpan(void);
		int  longestSpan(void);
		std::vector<int>	get_v() const;
		~Span(void);
		class LimitExceeded : public std::exception 
		{
			public :
				const char	*what(void) const throw();
		};
		class NoSpan : public std::exception 
		{
			public :
				const char	*what(void) const throw();
		};
};
