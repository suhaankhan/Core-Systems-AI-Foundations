#include <iostream>

int main() {
    int A[3]; // Declaration of a Fixed size Array
    int B[] = {2, 4, 6, 8, 10}; // Size is automatically set to 5 based on the items inside
    int C[5] = {1, 3}; // The index 2, 3, 4 will be automatically initialized to '0'

    for (int i = 0; i < 3; i++) {
        std::cout << "Value: " << A[i]; // Gives out junk values since we didn't initialized the Array.
        std::cout << " sits at Address: " << &A[i] << "\n";
    }
    std::cout << "\n";

    std::cout << "Size of A in bytes: " << sizeof(A) << "\n";
    std::cout << "Size of a single element of A in bytes: " << sizeof(A[0]) << "\n";
    std::cout << "\n";
    std::cout << "Size of B in bytes: " << sizeof(B) << "\n";
    std::cout << "Size of a single element of B in bytes: " << sizeof(B[0]) << "\n";
    std::cout << "\n";
    std::cout << "Size of C in bytes: " << sizeof(C) << "\n";
    std::cout << "Size of a single element of C in bytes: " << sizeof(C[0]) << "\n";
    std::cout << "\n";

    int b_size = sizeof(B) / sizeof(B[0]);

    for (int i = 0; i < b_size; i++) {
        std::cout << "Value: " << B[i];
        std::cout << " sits at Address: " << &B[i] << "\n";
    }
    std::cout << "\n";
    
    for (int i = 0; i < 5; i++) {
        std::cout << "Value: " << C[i];
        std::cout << " sits at Address: " << &C[i] << "\n";
    }
    std::cout << "\n";

    // For-Each Loop
    // Only goes forward, one element at a time, across the whole collection.
    for (int x:C) {
        std::cout << "Value: " << x << "\n";
    }
}