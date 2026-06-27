#include <iostream>

// 'int A[]' silently decays into 'int* A' under the hood
void printAndModify(int A[], int size) 
{
    // sizeof(A) here prints the pointer size (8 bytes) and thats because a memory address on a 64-bit CPU is always 64 bits (8 bytes) , and therefore it does NOT return the size of the full array!
    std::cout << "Inside function: " << sizeof(A) << " bytes" << std::endl;

    // Changes the original data directly since we are using its memory address
    A[0] = 99; 
}

int main() 
{
    int A[] = {2, 4, 5, 8, 1};
    int size = sizeof(A) / sizeof(A[0]); 

    std::cout << "Inside main:     " << sizeof(A) << " bytes" << std::endl;
    std::cout << "Before function: " << A[0] << std::endl;

    printAndModify(A, size);

    std::cout << "After function:  " << A[0] << std::endl;
}