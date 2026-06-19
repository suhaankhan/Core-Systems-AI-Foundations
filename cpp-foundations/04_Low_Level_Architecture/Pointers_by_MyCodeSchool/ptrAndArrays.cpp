#include <iostream>

int main() 
{
    int A[] = {2, 4, 5, 8, 1};

    // A and &A[0] are the exact same thing: the starting address
    std::cout << "Base address: " << A << std::endl;
    std::cout << "First value:  " << *A << std::endl; // Dereferencing gives A[0]

    std::cout << "\n--- Loop Check ---" << std::endl;
    for (int i = 0; i < 5; i++) 
    {
        // (A + i) skips forward by 'i' integers (i * 4 bytes)
        std::cout << "Addr: " << (A + i) << " | Val: " << *(A + i) << std::endl;
    }
}