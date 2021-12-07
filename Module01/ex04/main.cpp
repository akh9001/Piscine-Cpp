/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:31:54 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/17 17:07:05 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
# define string 	std::string
# define ifstream	std::ifstream
# define ofstream	std::ofstream
# define size_t		std::size_t
# define npos		string::npos
# define cout		std::cout
# define cin		std::cin
# define endl		std::endl
# define RED 		"\e[1;31m"
# define WHITE 		"\e[1;37m"

void	ft_replace(string& line, string s1, string s2)
{
	size_t	index;
	size_t	length_s1;
	size_t	length_s2;
	

	index = 0;
	length_s1 = s1.length();
	length_s2 = s2.length();
	while ((index = line.find(s1, index)) != npos)
	{
		line.erase(index, length_s1);
		line.insert(index, s2);
		index = index + length_s2;
	}
}

bool	ft_check_error(string filename, string s1, string s2, ifstream& ifs)
{
	if (!ifs.is_open())
	{
		cout << RED << "ERROR : Couldn't open "<< filename << WHITE << endl;	
		return (true);
	}
	if (ifs.peek() == EOF)
	{
		cout << RED << "ERROR : Empty File !!" << WHITE << endl;
		return (true);	
	}
	if (s1 == s2)
	{
		cout << RED << "Error: S1 && S2 are identical !" << WHITE << endl;
		return (true);
	}
	if (!s1.length() || !s2.length())
	{
		cout << RED << "Error : Empty string" << WHITE << endl;
		return (true);
	}
	return (false);
}

int	main(int argc, char **argv)
{
	string	filename;
	string	line;
	string	s1;
	string	s2;

	if (argc != 4)
	{
		cout << RED << "Wrong number of arguments!" << WHITE;
		return (1);
	}
	s1 = string(argv[2]);
	s2 = string(argv[3]);
	filename = string(argv[1]);
	ifstream	ifs(filename);
	if (ft_check_error(filename, s1, s2, ifs))
		return (1);
	ofstream	ofs(filename + ".replace");
	if (!ofs.is_open())
	{
		cout << RED << "ERROR : Couldn't open "<< filename + ".replace" <<" file!" << WHITE << endl;	
		return (1);		
	}
	while (!ifs.eof())
	{
		getline(ifs, line);
		ft_replace(line, s1, s2);
		ofs << line;
		if (!ifs.eof())
			ofs << endl;
	}
	ifs.close();
	ofs.close();
	return (0);
}
