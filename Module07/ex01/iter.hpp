/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 07:24:07 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/11 08:48:23 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template <typename T>
void printElement(T &var)
{
	std::cout << var << std::endl;
}

template <typename T>
void iter(T arr[], int n, void (*f)(T const &))
{
	for (int i = 0; i < n; i++)
		f(arr[i]);
}
