#include <iostream>

int main () {
    float balance = 1000.0f;
    short pass = 1234;
    short pin;
    short choice = 0;
    float deposit;
    short years;
     
    for (short try1 = 0; try1 < 3; try1++) {
        std::cout << "Enter PIN : ";
        std::cin >> pin;

        if (pin == pass) {
            while (choice != 4) {
                std::cout << "\n1. Check Balance\n2. Deposit\n3. Interest Projection\n4. Exit\n";
                std::cout << "Enter Choice : ";
                std::cin >> choice;

                if (choice == 1 ) {
                    std::cout << "Current Balance : " << balance << std::endl;
                }
                else if (choice == 2) {
                    std::cout << "How much would you like to Deposit?" << std::endl;
                    std::cout << "Enter Amount : ";
                    std::cin >> deposit;

                    balance = balance + deposit;
                }
                else if (choice == 3 ){
                    std::cout << "How many years?" << std::endl;
                    std::cin >> years;
                    
                    double temp_balance = balance;

                    for (int i = 1; i <= years; i++) {
                        temp_balance = temp_balance * 1.07;

                        std::cout << "Year " << i << " : " << temp_balance << std::endl;
                    }
                }
                else if (choice == 4) {

                }
                else {
                    std::cout << "Invalid Input." << std::endl;
                }
            }
            std::cout << "Goodbye." << std::endl;
            return 0;
        }
        else {
            std::cout << "Incorrect Pin !!! " << 2 - try1 << " Attempts Left." << std::endl;
        }
    }
    std::cout << "Maximum Attempts Reached !" << std::endl;
    std::cout << "SYSTEM LOCKED !!!" << std::endl;
    return 0;
}