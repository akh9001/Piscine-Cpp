/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:44:21 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/18 10:24:46 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(int argc, char **argv)
{
	Karen	karen;

	if (argc != 2)
	{
		cout << "Error : You should enter ONE argument!" << endl;
		return(1);
	}
	karen.complain(string(argv[1]));
	return (0);
}