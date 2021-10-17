/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:44:21 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/17 18:49:25 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main(void)
{
	Karen	karen;

	karen.complain("INFO");
	karen.complain("DEBUG");
	karen.complain("ERROR");
	karen.complain("WARNING");
	return (0);
}