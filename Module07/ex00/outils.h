/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 03:29:20 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/11 04:27:01 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T		min(T &a, T &b)
{
	if (a < b)
		return (a);
	else
		return(b);
}

template <typename T>
T		max(T &a, T &b)
{
	if (a > b)
		return (a);
	else
		return(b);
}