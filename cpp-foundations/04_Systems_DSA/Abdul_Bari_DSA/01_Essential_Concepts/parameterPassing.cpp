#include <iostream>

void swap_value(int x, int y) { // Formal Parameters
    int temp = x;
    x = y;
    y = temp;
}

void swap_address(int *x, int *y) { // We will have to Dereference these Formal parameters
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap_reference(int &x, int &y) { // Reference is nothing but alias
    int temp = x;
    x = y;
    y = temp;
}

int main () {
    // Pass By Value
    int a1 = 10; // Actual Parameters
    int b1 = 20;
    swap_value(a1, b1); // Only the formal parameters get modified
    // but the actual parameter remains the same
    std::cout << "---Pass by Value---" << "\n"; 
    std::cout << "a1 = " << a1 << "\n";
    std::cout << "b1 = " << b1 << "\n\n";

    // Call By Address
    int a2 = 40;
    int b2 = 50;
    swap_address(&a2, &b2);
    std::cout << "---Call By Address---" << "\n"; 
    std::cout << "a2 = " << a2 << "\n";
    std::cout << "b2 = " << b2 << "\n\n";

    // Call By Reference
    int a3 = 70;
    int b3 = 80;
    swap_reference(a3, b3);
    std::cout << "---Call By Reference---" << "\n"; 
    std::cout << "a3 = " << a3 << "\n";
    std::cout << "b3 = " << b3 << "\n\n";
}