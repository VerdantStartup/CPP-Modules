/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: verdant <verdant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 16:52:22 by verdant           #+#    #+#             */
/*   Updated: 2023/04/29 17:07:40 by verdant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


#include <iostream>
#include <ctime>

void Account::_displayTimestamp( void ) {
		time_t now = time(0);
		tm* localTime = localtime(&now);
		std::cout << "[" << (localTime->tm_hour < 10 ? "0" : "") << localTime->tm_hour << ":"
							<< (localTime->tm_min < 10 ? "0" : "") << localTime->tm_min << " "
							<< (localTime->tm_mday < 10 ? "0" : "") << localTime->tm_mday << "/"
							<< ((localTime->tm_mon + 1) < 10 ? "0" : "") << (localTime->tm_mon + 1) << "/"
							<< (localTime->tm_year + 1900) << "] ";
}


void Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}


bool Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal <= _amount) {
		std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		return true;
	} else {
		std::cout << "refused" << std::endl;
		return false;
	}
}

int Account::checkAmount ( void ) const {
	return _amount;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


Account::Account( int initial_deposit ) :
	_accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts( void ) {
		return Account::_nbAccounts;
}

int Account::getTotalAmount( void ) {
		return Account::_totalAmount;
}

int Account::getNbDeposits( void ) {
		return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
		return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
		Account::_displayTimestamp();
		std::cout << "accounts:" << Account::getNbAccounts() << ";" << std::endl;
}
