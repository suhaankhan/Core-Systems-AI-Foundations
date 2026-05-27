#include <iostream>

int main() {
    int data[6] = {10, 20, 30, 40, 50, 60};
    int n = 6;

    for (int i = 0; i < n/2; i++) {
        int temp = data[i];
        data[i] = data[n - 1 - i];
        data[n - 1 - i] = temp;
    }

    std::cout << "Reversed RAM: ";
    for (int i = 0; i < n; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}