/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:57:12 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/07 18:00:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>     // std::cout, std::endl
#include <iomanip>      // std::setw

int main () {
  std::cout << std::setw(10);
  std::cout << 77 << "|" << "hello" << "|" << std::endl;
  return 0;
}