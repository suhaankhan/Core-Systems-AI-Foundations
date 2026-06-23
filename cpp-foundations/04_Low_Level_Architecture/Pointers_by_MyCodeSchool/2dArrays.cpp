#include <iostream>

int main() 
{
    int B[2][3] = {
        {2, 4, 6},
        {5, 8, 1}
    };

    // Quick refresher from the screenshot:
    // (A + i) == &A[i]  <-- Address
    // *(A + i) == A[i]  <-- Value
    //
    // For 2D, it shifts down a level:
    // B basic name points to row 0
    // (B + i) points to row i block
    // *(B + i) unpacks it to point to the first actual int inside that row (&B[i][0])
    // *(B + i) + j shifts columns forward to get the address of B[i][j]
    // *(*(B + i) + j) finally dereferences the whole thing to grab the actual value

    // Checking row addresses
    std::cout << "Row 1 Addr:      " << (B + 1) << std::endl;
    std::cout << "Row 1 Addr alt:  " << &B[1] << std::endl;

    // This prints the exact same hex address as above, but under the hood 
    // the compiler now treats it as a single int pointer instead of a whole row block
    std::cout << "Elem 0 Addr:     " << *(B + 1) << std::endl;
    std::cout << "Elem 0 Addr alt: " << &B[1][0] << std::endl;

    // Verifying value lookup formula for B[1][2]
    std::cout << "Value via normal: " << B[1][2] << std::endl;
    std::cout << "Value via ptr:    " << *(*(B + 1) + 2) << std::endl;

    // Verifying address lookup formula for B[1][2]
    std::cout << "Addr via normal:  " << &B[1][2] << std::endl;
    std::cout << "Addr via ptr:     " << (*(B + 1) + 2) << std::endl;
}