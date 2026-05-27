#include <iostream>

int main() {
    int num;

    std::cout << "Enter a Number greater than 2: ";
    std::cin >> num;

    if (num <= 1) {
        std::cout << "Invalid Input!!!" << std::endl;
    }

    else {
        std::cout << "Prime numbers smaller than " << num << " are : ";

        for (int i = 2 ; i < num ; i++) {
            bool isPrime = true;

            for (int div = 2 ; div < i ; div++) {
                if (i % div == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                std::cout << i << ", ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}