#include <iostream>

int main() {
    int var = 8;
    int* ptr = &var;

    std::cout << "Original value : " << var << std::endl;

    *ptr = 10;

    std::cout << "New value via pointer : " << var << std::endl;
    std::cout << "Memory Address : " << ptr << std::endl;

    return 0;
}