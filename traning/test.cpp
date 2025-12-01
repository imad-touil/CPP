/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatouil <imatouil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 13:14:39 by imatouil          #+#    #+#             */
/*   Updated: 2025/12/01 16:15:26 by imatouil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <ctime>
// #include "Account.hpp"

// int	main(void)
// {
// 	char buffer[80];
// 	std::time_t	_currenttime;
// 	std::tm* _localtime;

// 	_currenttime = std::time(NULL);
// 	_localtime = std::localtime(&_currenttime);
// 	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", _localtime);
// 	std::cout << buffer << std::endl;
// 	return 0;
// }

#include <vector>
#include <algorithm>
#include "Account.hpp"
#include <iostream>

int main() {
// Create initial accounts
int initial_amounts[] = {42, 54, 957, 432, 1234, 0, 754, 16576};
size_t n_accounts = sizeof(initial_amounts) / sizeof(int);
std::vector<Account> accounts;
for (size_t i = 0; i < n_accounts; ++i)
accounts.push_back(Account(initial_amounts[i]));


// Display initial info
Account::displayAccountsInfos();
for (auto& acc : accounts)
    acc.displayStatus();

// Deposits
int deposits_arr[] = {5, 765, 564, 2, 87, 23, 9, 20};
size_t n_deposits = sizeof(deposits_arr) / sizeof(int);
for (size_t i = 0; i < n_deposits; ++i)
    accounts[i].makeDeposit(deposits_arr[i]);

// Display after deposits
Account::displayAccountsInfos();
for (auto& acc : accounts)
    acc.displayStatus();

// Withdrawals
int withdrawals_arr[] = {321, 34, 657, 4, 76, 275, 657, 7654};
size_t n_withdrawals = sizeof(withdrawals_arr) / sizeof(int);
for (size_t i = 0; i < n_withdrawals; ++i)
    accounts[i].makeWithdrawal(withdrawals_arr[i]);

// Display final status
Account::displayAccountsInfos();
for (auto& acc : accounts)
    acc.displayStatus();

return 0;


}
