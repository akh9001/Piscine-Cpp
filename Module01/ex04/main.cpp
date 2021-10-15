/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:31:54 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/15 19:41:57 by akhalidy         ###   ########.fr       */
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
		// index = find(line, index);
		line.erase(index, length_s1);
		line.insert(index, s2);
		index = index + length_s2;
	}
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
	ofstream	ofs(filename + ".replace");
	if (!ifs.is_open())
	{
		cout << "ERROR : Couldn't open "<< filename <<" file!" << endl;	
		return (1);
	}
	if (!ofs.is_open())
	{
		cout << "ERROR : Couldn't open "<< filename + ".replace" <<" file!" << endl;	
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
