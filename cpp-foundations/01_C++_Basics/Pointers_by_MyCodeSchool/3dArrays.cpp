#include <iostream>

int main() 
{
    int C[3][2][2] = {
        { {2, 5}, {7, 9} },   // block 0 starts at base addr
        { {3, 4}, {6, 1} },   // block 1 base + 16 bytes
        { {0, 8}, {11, 13} }  // block 2 base + 32 bytes
    };

    // box analogy cheat sheet
    // C                standing outside the whole shipping container (addr of block 0)
    // (C + i)          walking to the i-th shipping box
    // *(C + i)         opened box i. now looking at the 1st shoe box inside (&C[i][0])
    // *(C + i) + j     walking to shoe box j inside that opened block
    // *(*(C + i) + j)  opened shoe box j. now looking at the 1st actual int slot (&C[i][j][0])
    // *(*(C + i) + j) + k   walking to the exact int slot k
    // *(*(*(C + i) + j) + k) reached in and grabbed the actual int value

    int i = 1, j = 1, k = 0;

    // proof: c+i and *(c+i) match because opening a block doesn't change the address.
    // but adding j shifts the address to the next row (shoe box) inside that block.
    std::cout << "block 1 outer addr:  " << (C + i) << std::endl;
    std::cout << "block 1 inside addr: " << *(C + i) << std::endl;
    std::cout << "shoe box inner addr: " << *(*(C + i) + j) << std::endl;
    std::cout << "exact target addr:   " << &C[i][j][k] << std::endl;

    // checking if the value matches up
    std::cout << "value at [1][1][0]: " << C[i][j][k] << std::endl;
    std::cout << "value via ptr math: " << *(*(*(C + i) + j) + k) << std::endl;
}