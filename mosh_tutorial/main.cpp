#include <iostream>

int main() {
    int a=1;
    int b=2;
    int box=a;
    a=b;
    b=box;
    std::cout << b << std::endl;
    return 0;
}