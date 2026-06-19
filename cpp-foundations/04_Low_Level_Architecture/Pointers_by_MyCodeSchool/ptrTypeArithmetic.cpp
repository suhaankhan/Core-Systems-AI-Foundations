#include <iostream>

int main()
{
    int a = 1025; // Binary: 00000000 00000000 00000100 00000001 (1024 + 1)
    int *p = &a;

    std::cout << "--- INT POINTER MECHANICS ---" << std::endl;
    std::cout << "Stored address inside p: " << p << std::endl;
    std::cout << "Value at p is:  " << *p << std::endl; // Reads all 4 bytes (1025)
    std::cout << "Address after stride p+1: " << p + 1 << std::endl; // Moves forward by sizeof(int) = 4 bytes

    // Typecasting the address of an int into a char pointer (1 byte orientation)
    char *p0;
    p0 = (char*)p; // 'p0' points to the exact same address as 'p', but its stride size is only 1 byte
    
    std::cout << "\n--- CHAR POINTER MECHANICS ---" << std::endl;
    std::cout << "Stored address inside p0: " << (void*)p0 << std::endl;      // (void*) forces cout to print char* as a hex address
    std::cout << "Value at p0 is:           " << (int)*p0 << std::endl;       // Reads only 1 byte (Byte 0) -> 1

    std::cout << "Address after stride p0+1: " << (void*)(p0 + 1) << std::endl; // Moves forward by sizeof(char) = 1 byte
    // Inspecting Byte 1
    std::cout << "Value at p0+1 is:         " << (int)*(p0 + 1) << std::endl; // Reads only the next byte (Byte 1) -> 4
}