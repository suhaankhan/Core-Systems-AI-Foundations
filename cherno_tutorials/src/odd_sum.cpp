#include <iostream>

int main() {
    int count = 1;
    int sum = 0;
    int num;

    std::cout << "Enter a Number : ";
    std::cin >> num;

    while (count < (num + 1)) {
        if (count % 2 != 0) {
            sum = sum + count;
        }
        count++;
    }
    std::cout << "Sum of all the odd numbers between 0 and " << num << " is : " << sum << std::endl;
    return 0;
}