#include <iostream>

int main() {
    const int maxAttempts = 3;
    const int pass = 1234;
    int userInput;
    bool success = false;

    for (int i = 0; i < maxAttempts; i++) {
        std::cout << "Enter password : ";
        std::cin >> userInput;
        if (userInput == pass) {
            std::cout << "Password is Correct." << std::endl;
            success = true;
            break;
        }
        else {
            std::cout << "Incorrect Password." << std::endl;
        }
    }
    if (success == false) {
        std::cout << "Too many failed attempts. Try again Later." << std::endl;
    }
    return 0;
}