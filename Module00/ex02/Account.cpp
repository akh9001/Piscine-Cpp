/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:22:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/11 14:00:41 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <time.h>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define string		std::string

// Initialize static var
int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;



Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << "amount:" << _amount <<";created" << endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << "amount:" << _amount <<";closed" << endl;	
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account::displayStatus( void ) const
{
	cout << "[19920104_091532]" << "index:" << _accountIndex;
	cout << "amount:" << _amount <<";created" << endl;
}

void	Account::displayAccountsInfos(void) // Static function ????
{

	cout << "accounts:" << _nbAccounts;
	cout << "total:" << _totalAmount;
	cout <<"deposits:" << _totalNbDeposits;
	cout <<"withdrawals:" << _totalNbWithdrawals;
	cout << endl;
}

void	Account::_displayTimestamp( void )
{
	struct tm	*tim;
	const time_t var = time(0);

	tim = localtime(&var);
	cout << "["<< tim->tm_year + 1900 << tim->tm_mon + 1 << tim->tm_mday << "_";
	cout << tim->tm_hour;
	cout << tim->tm_min;
	cout << tim->tm_sec;
	cout << "] ";	
}

void	Account::makeDeposit(int deposit)
{
	_amount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
int		Account::checkAmount( void ) const