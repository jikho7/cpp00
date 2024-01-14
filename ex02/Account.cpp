#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
std::string blue_b = "\033[94m";
std::string blue_e = "\033[0m";

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	Account::_displayTimestamp();
	std::cout << " index:" << blue_b << _accountIndex << blue_e << ";amount:" << blue_b << initial_deposit << blue_e << ";created" << std::endl;
	Account::_nbAccounts++;
	_amount = initial_deposit;
	Account::_totalAmount += _amount;
}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << " index:" << blue_b << _accountIndex << blue_e << ";amount:" << blue_b << _amount << blue_e << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << blue_b << Account::getNbAccounts() << blue_e << ";total:" << blue_b << Account::getTotalAmount() << blue_e << ";deposits" << blue_b << Account::getNbDeposits() << blue_e << ";withdrals:" << blue_b << Account::getNbWithdrawals() << blue_e << std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_totalNbDeposits++;
	_nbDeposits++;
	Account::_displayTimestamp();
	std::cout << " index:" << blue_b << _accountIndex << blue_e << ";p_amount:" << blue_b << Account::checkAmount() << blue_e << ";deposit:" << blue_b << deposit << blue_e << ":amount:" << blue_b << (_amount + deposit) << blue_e << ";nb_deposits:" << blue_b << _nbDeposits << blue_e << std::endl;
	_amount += deposit;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawl)
{
	Account::_displayTimestamp();
	if (withdrawl > _amount)
		std::cout << " index:" << blue_b << _accountIndex << blue_e << ";p_amount:" << blue_b << Account::checkAmount() << blue_e << ";withdrawal:refused" << std::endl;
	else
	{
		Account::_totalNbWithdrawals++;
		_nbWithdrawals++;
		std::cout << " index:" << blue_b << _accountIndex << blue_e << ";p_amount:" << blue_b << Account::checkAmount() << blue_e << ";withdrawal:" << blue_b << withdrawl << blue_e << ";amount:" << blue_b << (_amount - withdrawl) << blue_e <<  ";nb_withdrawls:" << blue_b << _nbWithdrawals << blue_e << std::endl;
		Account::_totalAmount -= withdrawl;
		_amount = _amount - withdrawl;
	}
	return(0);
}

int Account::checkAmount() const
{
	return(_amount);
}

void Account::displayStatus() const
{
	Account::_displayTimestamp();
	std::cout << " index" << blue_b << _accountIndex << blue_e << ";amount:" << blue_b << Account::checkAmount() << blue_e << ";deposits:" << blue_b << _nbDeposits << blue_e << ";withdrawls:" << blue_b << _nbWithdrawals << blue_e << std::endl;
	;
}

void	Account::_displayTimestamp( void )
{
	std::time_t rawTime;
	std::time(&rawTime);
	char buffer[80];

	std::tm* localTime = std::localtime(&rawTime); // struct tm * localtime (const time_t * timer);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", localTime);
	// size_t strftime (char* ptr, size_t maxsize, const char* format,  const struct tm* timeptr );
	std::cout << buffer;
}

