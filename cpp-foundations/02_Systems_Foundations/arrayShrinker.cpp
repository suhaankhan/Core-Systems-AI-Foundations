#include <iostream>

int main() {
    int list[10];
    int n;

    std::cout << "Enter elements (max 10): ";
    std::cin >> n;

    if (n > 10 || n < 1) {
        std::cout << "Invalid Input!" << std::endl;
        return 1;
    }

    for (int i = 0; i < n; i++) {
        std::cout << "Enter value for element [" << i << "]: ";
        std::cin >> list[i];
    }

    std::cout << "Original Array: [";
    for (int i = 0; i < n; i++) {
        std::cout << list[i];

        if (i < (n-1)) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    int target;
    std::cout << "\nEnter the Number you want to remove: ";
    std::cin >> target;

    std::cout << "Processing..." << std::endl;

    int k = 0;
    for (int i = 0; i < n; i++) {
        if (list[i] != target) {
            list[k] = list[i];
            k++;
        }
    }

    n = k;

    std::cout << "Shrunken Array: [";
    for (int i = 0; i < n; i++) {
        std::cout << list[i];
        if (i < (n - 1)) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    std::cout << "New Size of the Array: " << n << std::endl;

    return 0;
}