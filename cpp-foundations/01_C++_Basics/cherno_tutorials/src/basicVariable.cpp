#include <iostream>

void fun() {
    int a = 3;
    double b = 5;
    const char c = 'z';

    std::cout << "Addresses: " << &a << "," << &b << "," << (void*)&c << std::endl;
}

int main () {
    fun();
    return 0;
    }