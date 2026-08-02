#include <iostream>

struct rectangle{
    // This Struct is created in order to see how much bytes it takes. 
    // Other than this, its of no use in this file
    int length = 0;
    int breadth = 0;
    int area = 0;
};

int main() {
    int a = 10;
    int *p1; 
    p1 = &a; 

    std::cout << "-----Pointer to a Variable-----" << "\n";
    std::cout << "Value of 'a': " << a << "\n";
    std::cout << "Value of 'a' via pointer: " << *p1 << "\n\n";
    std::cout << "Address of 'a': " << &a << "\n";
    std::cout << "Address of 'a' via pointer: " << p1 << "\n\n";
    std::cout << "Address of 'p1': " << &p1 << "\n\n";
    // In the terminal i saw that the address gap between 'a' and 'p1' is 0x10 which is 16 bytes.
    // 'a' is a variable therefore it takes only 4 bytes.
    // On the other hand on a 64-bit system, all pointers take up exactly 8 bytes of memory.
    // Total bytes used = 12 but the gap shown by the compiler is 16 bytes
    // The remaining 4 bytes is purely padding bytes
    // The compiler adds this space to align the 8-byte pointer on a clean 16-byte boundary for faster CPU reads.

    int X[5] = {2, 4, 6, 8, 10}; // Memory is allocated to the "main funtion" frame of the Stack
    int *p2;
    p2 = X; // X points directly to the starting address of the stack array
    // p2 = &X; This will throw an error!
    p2 = &X[0]; // This is pointing to the address of the 0th index of the array 'X'.

    // Since X just gives out the starting address of the array,
    // Therefore, to access all the elements of the array, we'll use a for loop.
    std::cout << "---Pointer to an Array allocated on Stack---" << "\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Value of element " << (i + 1) << " via Stack pointer:" << p2[i] << "\n"; // In case of Arrays, Pointers acts as name of Arrays
    } 
    std::cout << "\n";

    int *p3 = new int[4]{9, 8, 7, 6}; // Allocates on heap AND initializes at the same time
    int *p4 = new int[5]{10, 20}; // The index 3rd and 4th are automatically assigned the value '0'. 

    std::cout << "---Pointer to Arrays allotcated on Heap---" << "\n";
    for (int i = 0; i < 4; i++) {
        std::cout << "Value of element " << (i + 1) << " via pointer:" << p3[i] << "\n";
    }
    std::cout << "\n";

    for (int i = 0; i < 4; i++) {
        std::cout << "Value of element " << (i + 1) << " via pointer:" << p4[i] << "\n";
    }
    std::cout << "\n";

    // Since we dynamically allocated the memory on Heap,
    // therefore we are required to release that memory once we are finished using it.
    delete []p3;
    p3 = nullptr; // resets the pointer so it doesn't point to a graveyard

    delete []p4;
    p4 = nullptr;

    int *q1 = nullptr;
    char *q2 = nullptr;
    float *q3 = nullptr;
    double *q4 = nullptr;
    struct rectangle *q5 = nullptr;

    std::cout << "---Size of different data types of Pointers---" << "\n";
    std::cout << "Int* = " << sizeof(q1) << " Bytes" << "\n";
    std::cout << "char* = " << sizeof(q2) << " Bytes" << "\n";
    std::cout << "float* = " << sizeof(q3) << " Bytes" << "\n";
    std::cout << "double* = " << sizeof(q4) << " Bytes" << "\n";
    std::cout << "struct* = " << sizeof(q5) << " Bytes" << "\n";
    // Every pointer takes the same amount of memory i.e 8 Bytes
    // Therefore, size of a pointer is independent of its data type

    std::cout << "\n";
    std::cout << "---After Dereferencing the pointers, we'll be able to see the Size of their respective Data Types---" << "\n";
    std::cout << "Int* = " << sizeof(*q1) << " Bytes" << "\n";
    std::cout << "char* = " << sizeof(*q2) << " Bytes" << "\n";
    std::cout << "float* = " << sizeof(*q3) << " Bytes" << "\n";
    std::cout << "double* = " << sizeof(*q4) << " Bytes" << "\n";
    std::cout << "struct* = " << sizeof(*q5) << " Bytes" << "\n";
}