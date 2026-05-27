/*
Note: This prints the binary in reverse. Will refactor after studying Arrays/Strings.
*/

#include <iostream>

int main() {
    int num;
    short remainder = 0;

    std::cout << "Enter a Positive Number : ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "Binary Result : ";
        while (num > 0) {
            remainder = num % 2;
            std::cout << remainder;

            num = num / 2;
        }
        std::cout << std::endl;
    }
    else if (num == 0) {
        std::cout << "0" << std::endl;
    }
    else {
        std::cout << "Invalid Input !!!" << std::endl;
    }
    return 0;
}