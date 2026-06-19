#include <iostream>

int main() 
{
    int a = 5;
    int *p = &a;   // pointer to int
    int **q = &p;  // pointer to pointer to int
    int ***r = &q; // triple pointer (pointing to q)

    // Checking values via dereferencing
    std::cout << "--- Values ---" << std::endl;
    std::cout << "Direct variable a: " << a << std::endl;
    std::cout << "Single pointer *p: " << *p << std::endl;
    std::cout << "Double pointer **q: " << **q << std::endl;
    std::cout << "Triple pointer ***r: " << ***r << std::endl;

    // Tracing the address chain across the stack
    std::cout << "\n--- Addresses ---" << std::endl;
    std::cout << "a address (&a):      " << &a << std::endl;
    std::cout << "p stores (should=&a): " << p << std::endl;
    
    std::cout << "p address (&p):      " << &p << std::endl;
    std::cout << "q stores (should=&p): " << q << std::endl;
    
    std::cout << "q address (&q):      " << &q << std::endl;
    std::cout << "r stores (should=&q): " << r << std::endl;

    // Mutating the data from different pointer levels
    std::cout << "\n--- Modifying Memory ---" << std::endl;
    
    **q = 10; 
    std::cout << "a after **q = " << a << std::endl;

    ***r = 25; 
    std::cout << "a after ***r = " << a << std::endl;
}