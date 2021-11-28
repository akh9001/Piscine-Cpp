/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:31 by akhalidy          #+#    #+#             */
/*   Updated: 2021/11/28 07:07:18 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

SCF::SCF(void) :
Form("ShrubberyCreationForm", "undefined", 145, 137)
{
	cout << "SCF::Default constructor called." << endl;
}

SCF::SCF(string target) :
Form("ShrubberyCreationForm", target, 145, 137)
{
	cout << "SCF::Default constructor called." << endl;
}

SCF::SCF(SCF const &src) : Form("ShrubberyCreationForm", "undefined", 145, 137)
{
	cout << "SCF::Copy destructor called." << endl;
	*this = src;
}

SCF		&SCF::operator=(SCF const &src)
{
	cout << "SCF::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
}

void	SCF::creat_Shrubbery(void) const
{
	ofstream	File(get_target() + "_shrubbery");
	
	File << "                                              ." << endl;
	File << "                                   .         ;" << endl;
	File << "      .              .              ;%     ;;" << endl;
	File << "        ,           ,                :;%  %;" << endl;
	File << "         :         ;                   :;%;'     .," << endl;
	File << ",.        %;     %;            ;        %;'    ,;" << endl;
	File << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << endl;
	File << "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << endl;
	File << "    ;%;      %;        ;%;        % ;%;  ,%;'" << endl;
	File << "     `%;.     ;%;     %;'         `;%%;.%;'" << endl;
	File << "      `:;%.    ;%%. %@;        %; ;@%;%'" << endl;
	File << "         `:%;.  :;bd%;          %;@%;'" << endl;
	File << "           `@%:.  :;%.         ;@@%;'" << endl;
	File << "             `@%.  `;@%.      ;@@%;" << endl;
	File << "               `@%%. `@%%    ;@@%;" << endl;
	File << "                 ;@%. :@%%  %@@%;" << endl;
	File << "                   %@bd%%%bd%%:;" << endl;
	File << "                     #@%%%%%:;;" << endl;
	File << "                     %@@%%%::;" << endl;
	File << "                     %@@@%(o);  . '" << endl;
	File << "                     %@@@o%;:(.,'" << endl;
	File << "                 `.. %@@@o%::;" << endl;
	File << "                    `)@@@o%::;" << endl;
	File << "                     %@@(o)::;" << endl;
	File << "                    .%@@@@%::;" << endl;
	File << "                    ;%@@@@%::;." << endl;
	File << "                   ;%@@@@%%:;;;." << endl;
	File << "               ...;%@@@@@%%:;;;;,.." << endl;
	File << endl << endl << endl;
	File << "							    " << endl;
	File << "                    # #### ####" << endl;
	File << "                  ### \/#|### |/####" << endl;
	File << "                 ##\/#/ \||/##/_/##/_#" << endl;
	File << "               ###  \/###|/ \/ # ###" << endl;
	File << "             ##_\_#\_\## | #/###_/_####" << endl;
	File << "            ## #### # \ #| /  #### ##/##" << endl;
	File << "             __#_--###`  |{,###---###-~" << endl;
	File << "                       \ }{" << endl;
	File << "                        }}{" << endl;
	File << "                        }}{" << endl;
	File << "                        {{}" << endl;
	File << "                  , -=-~{ .-^- _" << endl;
	File << "                        `}" << endl;
	File << "                         {" << endl;
	File << "							   " << endl;
	File << "							   " << endl;
	File << "			           \/ |    |/" << endl;
	File << "			        \/ / \||/  /_/___/_" << endl;
	File << "			         \/   |/ \/" << endl;
	File << "			    _\__\_\   |  /_____/_" << endl;
	File << "			           \  | /          /" << endl;
	File << "			  __ _-----`  |{,-----------~" << endl;
	File << "			            \ }{" << endl;
	File << "			             }{{" << endl;
	File << "			             }}{" << endl;
	File << "			             {{}" << endl;
	File << "			       , -=-~{ .-^- _" << endl;
	File << "			            `}" << endl;
	File << "			              {" << endl;	
}

SCF::~SCF(void)
{
	cout << "SCF::Destructor called." << endl;
}
