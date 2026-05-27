#include <iostream>

int main() {
    int vault[8] = {12, 64, 23, 90, 5, 43, 71, 99};
    int n = 8;

    int number;
    std::cout << "Enter the Number whose memory you want to see: ";
    std::cin >> number;

    bool found = false;

    for (int i = 0; i < n; i++) {
        if (number == vault[i]) {
            std::cout << "Target found at index [" << i << "] and memory address [" << &vault[i] << "]" << std::endl;
            found = true;

            break;
        }
    }
    
    if (found == false) {
        std::cout << number << " is Not present in Vault!!!" << std::endl;
    }

    return 0;
}
