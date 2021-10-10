/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   help_functions.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:20:23 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 16:48:03 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"

string	str_wide_10(string	str)
{
	int		len;

	len = str.size();
	if (len >= 10)
	{
		str = str.substr(0, 10);
		str[9] = '.';			
	}
	return (str);
}

int		check_required_str_field(string	&str,string msg, string err)
{
	int	n;

	n = -1;
	do
	{
		n++;
		if (!n)
			cout << msg;
		else
			cout << RED << err << DEFAULT;
	}
	while (getline(cin, str) && str.empty());
	return (0);
}

int		is_number(string str)
{
	int		i;

	i = 1;
	if (!isdigit(str[0]) && str[0] != '+')
		return (1);
	while (str[i])
	{
		if (!isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int		check_index(string	&index, int _last_entry)
{
	int		in;

	while (getline(cin, index) && index.empty());
	if (is_number(index))
	{
		cout << YELLOW  << "Wrong index, please enter a number : " << DEFAULT;
		return (1);
	}
	in = stoi(index);
	if (!(in >= 0 && in <= 7))
	{
		cout << YELLOW  << "Wrong index, please enter an index between 0 && 7 : " << DEFAULT;
		return (1);
	}	
	if (in > _last_entry)
	{
		cout << YELLOW  << "Wrong index, please enter an available index between 0 && " << _last_entry << " : " << DEFAULT;
		return (1);
	}	
	return (0);	
}
