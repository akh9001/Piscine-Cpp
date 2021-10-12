/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:22:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/12 17:52:11 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
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
	// Set Acount var :
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	// Set static var :
	_totalAmount += initial_deposit;
	_nbAccounts++;
	// Display created account infos :
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount <<";created" << endl;
}

Account::~Account(void)
{
	// Display distroyed account infos:
	_displayTimestamp();
	cout << "index:" << _accountIndex;
	cout << ";amount:" << _amount <<";closed" << endl;	
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
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";amount:" << _amount;
	cout << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals;
	cout << endl;
}

void	Account::displayAccountsInfos(void) // Static function ????
{
	_displayTimestamp();
	cout << "accounts:" << _nbAccounts;
	cout << ";total:" << _totalAmount;
	cout <<";deposits:" << _totalNbDeposits;
	cout <<";withdrawals:" << _totalNbWithdrawals;
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
	int	p_amount;

	if (deposit <= 0)
		return ;
	// Set Acount var :
	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	// Set static var :
	_totalAmount += deposit;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit;
	cout << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits;
	cout << endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int	p_amount;	

	p_amount = _amount;
	if (checkAmount() < withdrawal)
	{
		_displayTimestamp();
		cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused";
		cout << endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	// Set static var :
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	_displayTimestamp();
	cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:" << withdrawal;
	cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals;
	cout << endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}