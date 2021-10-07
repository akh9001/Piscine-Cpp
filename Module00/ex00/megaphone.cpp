/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:19:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 09:30:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

void	ft_toupper(int argc, char **argv)
{
	int		i;
	int		j;
	char	c;
	
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			c = (char)toupper(argv[i][j]);
			std::cout << c;
			j++;
		}
		i++;
		if (i == argc)
			std::cout << std::endl;

	}	
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	ft_toupper(argc, argv);
	return (0);
}
