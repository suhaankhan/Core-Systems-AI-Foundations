#include <iostream>

int main() {
    int num;
    std::cout << "Enter a Number : ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "Null state." << std::endl;
    }

    else if (num == 1) {
        std::cout << "Identity Found." << std::endl;
    }
    else {
        std::cout << "Invalid Input." << std::endl;
    }
    
    int count = 0;
    while (count <= 10) {
        if (count == 7) {
            std::cout << count << ": Target found" << std::endl;
        }
        else if (count == 0) {
            std::cout << count << ": Start point" << std::endl;
        }
        else {
            std::cout << count << std::endl;
        }

        count++;
    }
    return 0;
}