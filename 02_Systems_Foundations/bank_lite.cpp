#include <iostream>

int main() {
    float balance = 500.00f;
    float deposit;

    std::cout << "Current Balance : " << balance << std::endl;

    std::cout << "How much would you like to Deposit?" << std::endl;
    std::cout << "Enter Amount : ";
    std::cin >> deposit;

    balance = balance + deposit;

    std::cout << "Total Balance : " << balance << std::endl;

    return 0;
}