/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:09:31 by akhalidy          #+#    #+#             */
/*   Updated: 2021/12/02 20:25:28 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define RESET   "\033[0m"
ShrubberyCreationForm::ShrubberyCreationForm(void) :
Form("ShrubberyCreationForm", "undefined", 145, 137)
{
	cout << "ShrubberyCreationForm::Default constructor called." << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(string const &target) :
Form("ShrubberyCreationForm", target, 145, 137)
{
	cout << "ShrubberyCreationForm::Default constructor called." << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShrubberyCreationForm", "undefined", 145, 137)
{
	cout << "ShrubberyCreationForm::Copy destructor called." << endl;
	*this = src;
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	cout << "ShrubberyCreationForm::Assignement operator called." << endl;
	set_target(src.get_target());
	set_signed(src.get_signed());
	return(*this);
}

void	ShrubberyCreationForm::creat_Shrubbery(void) const
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
	File << "                  ### \\/#|### |/####" << endl;
	File << "                 ##\\/#/ \\||/##/_/##/_#" << endl;
	File << "               ###  \\/###|/ \\/ # ###" << endl;
	File << "             ##_\\_#\\_\\## | #/###_/_####" << endl;
	File << "            ## #### # \\ #| /  #### ##/##" << endl;
	File << "             __#_--###`  |{,###---###-~" << endl;
	File << "                       \\ }{" << endl;
	File << "                        }}{" << endl;
	File << "                        }}{" << endl;
	File << "                        {{}" << endl;
	File << "                  , -=-~{ .-^- _" << endl;
	File << "                        `}" << endl;
	File << "                         {" << endl;
	File << "							   " << endl;
	File << "							   " << endl;
	File << "			           \\/ |    |/" << endl;
	File << "			        \\/ / \\||/  /_/___/_" << endl;
	File << "			         \\/   |/ \\/" << endl;
	File << "			    _\\__\\_\\   |  /_____/_" << endl;
	File << "			           \\  | /          /" << endl;
	File << "			  __ _-----`  |{,-----------~" << endl;
	File << "			            \\ }{" << endl;
	File << "			             }{{" << endl;
	File << "			             }}{" << endl;
	File << "			             {{}" << endl;
	File << "			       , -=-~{ .-^- _" << endl;
	File << "			            `}" << endl;
	File << "			              {" << endl;	
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!get_signed())
		throw Form::Unsigned(this->get_name());
	if (executor.getGrade() > this->get_execGrade())
		throw Form::Illegal(this->get_name());
	creat_Shrubbery();
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	cout << "ShrubberyCreationForm::Destructor called." << endl;
}
