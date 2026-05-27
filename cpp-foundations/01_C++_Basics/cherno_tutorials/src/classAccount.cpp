#include <iostream>

class Account {
private:
    int balance;

public:
    const char* ownerName;

    void initialBalance(int amount) {
        balance = amount;
    }

    void Deposit (int amount) {
        balance = balance + amount;
        std::cout << "Deposited: " << amount << std::endl;
    }

    void Withdraw(int amount) {
        if (amount > balance) {
            std::cout << "Error: Insufficient money for withdrawal of " << amount << std::endl;
        } else {
            balance = balance - amount;
            std::cout << "Withdrawn: " << amount << std::endl;
        }
    }

    void finalBalance() {
        std::cout << "Owner: " << ownerName << " | Total Balance: " << balance << std::endl;
    }
};

int main() {
    Account myAccount;
        myAccount.ownerName = "Suhaan Khan";
        myAccount.initialBalance(1000);

        myAccount.Deposit(500);
        myAccount.Withdraw(2000);
        myAccount.finalBalance();

    return 0;
}