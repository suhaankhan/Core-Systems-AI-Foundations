#include <iostream>
#include "math.h"

int multiply() {
    int a, b;

    std::cout << "input a: ";
    std::cin >> a;

    std::cout << "input b: ";
    std::cin >> b;

    int result = a * b;
    std::cout << "When multiplying A and B, we get : " << result << std::endl;
    return result;
}

