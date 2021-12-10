/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 16:45:26 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/10 06:09:45 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base	*generate(void)
{
	int			n;
	static int	c;

	srand(time(0));
	n = rand() + c++;
	if (n % 3 == 1)
	{
		// cout << "A" << endl;
		return (new A());
	}
	else if (n % 3 == 2)
	{
		// cout << "B" << endl;
		return (new B());
	}
	return (new C());
}

void	identify(Base* p)
{
	if (dynamic_cast <A*> (p))
		cout << "A" << endl;
	else if (dynamic_cast <B*> (p))
		cout << "B" << endl;
	else if (dynamic_cast <C*> (p))
		cout << "C" << endl;
	else
		cout << "Undefined type" << endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast <A&> (p);
		cout << "A" << endl;
	}
	catch(const exception& e)
	{
		try
		{
			(void)dynamic_cast <B&> (p);
			cout << "B" << endl;
		}
		catch(const exception& e)
		{
			try
			{
				(void)dynamic_cast <C&> (p);
				cout << "C" << endl;
			}
			catch(const exception& e)
			{
				cout << "Undefined type" << endl;
			}
		}
	}
}

int	main(void)
{
	Base	*base_1;
	Base	&base_2 = *generate(); 

	base_1 = generate();
	cout << MAGENTA << "Identify base_1" << WHITE << endl;
	identify(base_1);
	cout << MAGENTA << "Identify base_2" << WHITE << endl;
	identify(base_2);
	delete base_1;
	delete &base_2;
	return(0);
}
