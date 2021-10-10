/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 21:29:45 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 21:48:21 by akhalidy         ###   ########.fr       */
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
	cout << "["<< time->tm_year + 1900 << tim->tm_mon + 1 << tim->tm_mday << "_"<< "]" <<
	 cout << "Date and time is: " << tim->tm_hour << endl;
	 cout << "Date and time is: " << tim->tm_min << endl;
	 cout << "Date and time is: " << tim->tm_sec << endl;
	 cout << "Date and time is: " << tim->tm_mday << endl;
	 cout << "Date and time is: " << tim->tm_mon + 1<< endl;
	 cout << "Date and time is: " << tim->tm_year + 1900 << endl;
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
