#include <iostream>

int main() {
    // Conceptually, a Reference doesn't consume any memory.
    // It is purely an alias—another name for an already existing variable.
    // The compiler optimizes local references away completely (takes 0 bytes in RAM). 
    // It only implements them as 8-byte pointers when passed into functions or used as class members. 

    int a = 10; // Data Variable
    int &r = a; // Reference; a reference must be initialized when declared

    std::cout << "Value of 'a': " << a << "\n";
    std::cout << "Value of 'r': " << r << "\n\n";
    
    int x = 45;
    r = x; // Here we are assigning the value of 'x' to 'r' and therefore it will also get assigned to 'a'

    std::cout << "Value of 'a': " << a << "\n";
    std::cout << "Value of 'r': " << r << "\n\n";
}