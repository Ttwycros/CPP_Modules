#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>

int Account :: _nbAccounts = 0;
int Account :: _totalAmount = 0;
int Account :: _totalNbDeposits = 0;
int Account :: _totalNbWithdrawals = 0;

int	Account :: getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account :: getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account :: getTotalAmount(void)
{
	return _totalAmount;
}

int	Account :: getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account :: _displayTimestamp(void)
{
	std :: chrono :: time_point <std :: chrono :: system_clock> cur = std :: chrono :: system_clock :: now();
	std :: time_t time = std :: chrono :: system_clock :: to_time_t(cur);

	struct tm utc_tm = *localtime(&time);
	std :: cout << std :: setfill('0') << "[" << (utc_tm.tm_year + 1900)
			<< std :: setw(2) << utc_tm.tm_mon
			<< std :: setw(2) << utc_tm.tm_mday << "_"
			<< std :: setw(2) << utc_tm.tm_hour
			<< std :: setw(2) << utc_tm.tm_min
			<< std :: setw(2) << utc_tm.tm_sec << "] ";
}

void	Account :: displayAccountsInfos(void)
{
	_displayTimestamp();
	std :: cout << "accounts:" << _nbAccounts << ";"
		<< "total:" << _totalAmount << ";"
		<< "deposits:" << _totalNbDeposits << ";"
		<< "withdrawals:" << _totalNbWithdrawals << std :: endl;
}

Account :: Account(void) {}

Account :: Account(int initial_deposit)
{
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbWithdrawals = _nbDeposits = 0;
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "created" << std :: endl;
}

Account :: ~Account(void)
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "closed" << std :: endl;
}

int	Account :: checkAmount(void) const
{
	return _amount > 0;
}

void Account :: displayStatus(void) const
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";"
		<< "amount:" << _amount << ";"
		<< "deposits:" << _nbDeposits << ";"
		<< "withdrawals:" << _nbWithdrawals << std :: endl;
}

void	Account :: makeDeposit(int deposit)
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";"
		<< "deposits:" << deposit << ";"
		<< "amount:" << _amount + deposit << ";"
		<< "nb_deposits:" << _nbDeposits + 1 << std :: endl;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
}

bool Account :: makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std :: cout << "index:" << _accountIndex << ";"
		<< "p_amount:" << _amount << ";" << "withdrawal:";
	if (withdrawal > _amount) {
		std :: cout << "refused" << std :: endl;
		return false;
	}
	std :: cout << withdrawal << ";" << "amount:" << _amount - withdrawal << ";"
		<< "nb_withdrawals:" << _nbWithdrawals + 1 << std :: endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	return true;
}