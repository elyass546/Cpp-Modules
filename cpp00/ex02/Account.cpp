#include "Account.hpp"
#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include <iomanip>
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {

    this->_amount = initial_deposit;
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    this->_totalAmount += this->_amount;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
};

Account::~Account() {
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
};

void    Account::_displayTimestamp(void) {
    std::time_t t = std::time(0);   // get time now
    std::tm* now = std::localtime(&t);

    std::cout << '['<< (now->tm_year + 1900);
    std::cout << std::setw(2) << std::setfill('0') << (now->tm_mon + 1);
    std::cout << std::setw(2) << std::setfill('0') << now->tm_mday;
    std::cout << '_' << std::setw(2) << std::setfill('0') << now->tm_hour;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_min;
    std::cout << std::setw(2) << std::setfill('0') << now->tm_sec << "] ";
};

void    Account::displayAccountsInfos( void ) {
    _displayTimestamp();
    std::cout << "accouts:" << _nbAccounts << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
};


int Account::getNbAccounts(void){
    return ( _nbAccounts );
}

int Account::getTotalAmount( void ) {
    return ( _totalAmount );
}

int Account::getNbDeposits( void ) {
    return ( _totalNbDeposits );
}

int Account::getNbWithdrawals( void ) {
    return ( _totalNbWithdrawals );
}

void    Account::makeDeposit( int deposit ) {
    _displayTimestamp();
    int p_amount = _amount;

    _amount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << "index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:" << deposit
    << ";amount:" << _amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    
}

bool Account::makeWithdrawal( int withdrawal) {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
    if (_amount < withdrawal)
    {
        std::cout << "refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal;
    checkAmount();
    return (true);
}

int     Account::checkAmount(void) const {
    std::cout <<  ";amount" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    return (0);
}

void    Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" <<
    _amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

