#include <iostream>
#include "temp.h"

void toCelsius() {
    double fahrenheit;

    std::cout << "Enter Fahrenheit : ";
    std::cin >> fahrenheit;

    double celsius = (fahrenheit - 32.0)*(5.0/9.0);
    std::cout << fahrenheit << "F is " << celsius << "C" << std::endl;
}