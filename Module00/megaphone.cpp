/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:19:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/06 21:47:50 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void	upperPrint(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			c = str[i] - 32;
			std::cout << c;
		}
		else
			std::cout << str[i];
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	
	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	while (i < argc)
	{
		upperPrint(argv[i]);
		i++;
		if (i == argc)
			std::cout << std::endl;
		else
			std::cout << " ";
	}
	return (0);
}
