#include <iostream>

void printString(const char* C) 
{
    // Loops through until it hits the null terminator
    while (*C != '\0') 
    {
        std::cout << *C;
        C++; // Moves forward by 1 byte to the next character cause a char is of 1 byte
    }
    std::cout << std::endl;
}

int main() 
{
    // Stack array - completely fine to modify
    char C[] = "Hello"; 
    C[0] = 'A'; 
    printString(C);

    // Literal points directly to read-only text memory
    // Changing a char here (like literalPtr[0] = 'X') would throw a SegFault
    const char* literalPtr = "World"; 
    printString(literalPtr);
}