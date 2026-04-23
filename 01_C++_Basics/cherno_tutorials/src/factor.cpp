#include <iostream>

int main() {
    int limit;
    int sum = 0;

    std::cout << "enter the upper limit: ";
    std::cin >> limit;

    std::cout << "Numbers divisible by 5: " << std::endl;

    for (int i = 1; i <= limit; i++) {
        if (i % 5 == 0) {
            std::cout << i << " ";
            sum += i;
        }
    }

    std::cout << "\ntotal sum of these factors: " << sum << std::endl;

    return 0;
}