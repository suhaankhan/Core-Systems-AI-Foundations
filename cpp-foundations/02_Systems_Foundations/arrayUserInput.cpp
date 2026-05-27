#include <iostream>

int main() {
    int readings[100];
    int n;

    std::cout << "Enter the number of elements (Max 100): ";
    std::cin >> n;

    if (n > 100 || n < 1) {
        std::cout << "Invalid Size!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for element[" << i << "]: ";
        std::cin >> readings[i];
    }

    std::cout << "\nYour Array: [";
    for (int i = 0; i < n; i++) {
        std::cout << readings[i];

        if (i < (n - 1)) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}