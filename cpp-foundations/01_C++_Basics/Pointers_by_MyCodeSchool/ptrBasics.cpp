#include <iostream>

int main() 
{
    int a;
    int *p; // created a pointer 'p'
    std::cout << a << std::endl; // shows the junk integer value
    std::cout << p << std::endl; // returns the random garbage memory address stored inside 'p'
    std::cout << &p << std::endl; // returns the address of 'p'

    a = 10;
    p = &a; // 'p' now stores the physical address of 'a'
    std::cout << a << std::endl; // returns the updated value of 'a'
    std::cout << p << std::endl; // returns the address of 'a'
    std::cout << &a << std::endl;  // returns the address of 'a' for verification

    *p = 12; // dereferencing and assigning the value '12' to 'a' via pointer 'p'
    std::cout << a << std::endl; // shows that 'a's value has changed to 12 via the pointer
    std::cout << *p << std::endl; // returns the value stored in the pointer 'p'
}