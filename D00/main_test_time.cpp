/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:29:45 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/11 13:48:42 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctime>
#include <time.h>
using namespace std;

int main() {

		
	struct tm	*tim;
	const time_t var = time(0);
	tim = localtime(&var);
	cout << "["<< tim->tm_year + 1900 << tim->tm_mon + 1 << tim->tm_mday << "_";
	cout << tim->tm_hour;
	cout << tim->tm_min;
	cout << tim->tm_sec;
	cout << "]" << endl;
	// cout << tim->tm_mday << endl;
	// cout << tim->tm_mon + 1<< endl;
	// cout << tim->tm_year + 1900 << endl;
   // current date/time based on current system
   time_t now = time(0);
   
   // convert now to string form
   char* dt = ctime(&now);

   cout << "The local date and time is: " << dt << endl;

   // convert now to tm struct for UTC
   tm *gmtm = gmtime(&now);
   dt = asctime(gmtm);
   cout << "The UTC date and time is:"<< dt << endl;
}
