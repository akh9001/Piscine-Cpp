/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhalidy <akhalidy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 20:22:51 by akhalidy          #+#    #+#             */
/*   Updated: 2021/10/10 21:56:57 by akhalidy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
# define cin		std::cin
# define cout		std::cout
# define endl		std::endl
# define string		std::string

// Initialize static var
	t::int	_nbAccounts = -1;
	t::int	_totalAmount = 0;
	t::int	_totalNbDeposits = 0;
	t::int	_totalNbWithdrawals = 0;

t::Account(initial_deposit)
{
	_nbAccounts++;
	
}

t::~Account(void)
{
	//??
}

t::static int	getNbAccounts( void )
{
	return (_nbAccounts);
}
t::static int	getTotalAmount( void )
{
	return (_totalAmount);
}
t::static int	getNbDeposits( void )
{
	return (_totalNbDeposits);
}
t::static int	getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
t::static void	displayAccountsInfos( void )
{
	int	i = 0;
	while (i <= _nbAccounts)
	cout << "[19920104_091532]" << "index:" << _accountIndex;
	cout << "amount:" << _amount <<";created" << endl;
}