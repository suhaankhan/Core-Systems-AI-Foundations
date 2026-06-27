#include <iostream>

int main()
{
    int a = 10;
    char c = 'A';

    // A void pointer is a generic pointer type that can hold any address type
    void *p; 

    // 1. Valid Assignment to Int Address
    p = &a; 
    std::cout << "Void pointer p pointing to int address: " << p << std::endl;
    // std::cout << *p; // ERROR: Compilers do not know how many bytes to read! Must cast first:
    std::cout << "Dereferenced int via cast: " << *(int*)p << std::endl;

    // 2. Valid Assignment to Char Address
    p = &c; 
    std::cout << "\nVoid pointer p pointing to char address: " << p << std::endl;
    std::cout << "Dereferenced char via cast: " << *(char*)p << std::endl;

    // 3. Pointer Arithmetic Restrictions
    // p = p + 1; // ERROR: Compiler cannot calculate step size because sizeof(void) is incomplete/undefined
    std::cout << "\nTo do arithmetic, must cast first (p+1 as char*): " << (char*)p + 1 << std::endl;
}