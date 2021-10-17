/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 17:20:07 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/17 20:49:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# define cin	std::cin
# define cout	std::cout
# define endl	std::endl
# define string	std::string

class	Karen
{
	private :
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public :
		void	complain(string level);
};

typedef enum
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
}		level;

typedef struct	s_enumToString
{
	level	lvl;
	string	str;
}				t_enumToString;
