#include <iostream>

// Copies data to new stack slots -> changes get lost when function pops off stack
void swapByValue(int x, int y) 
{
    int temp = x;
    x = y;
    y = temp;
}

/* x and y are local pointer variables storing the addresses &a and &b.
   Dereferencing (*x, *y) forces the CPU to jump back up to main's 
   stack frame and modify the original variables permanently.
*/
void swapByReference(int *x, int *y) 
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() 
{
    int a = 10;
    int b = 20;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    swapByValue(a, b);
    std::cout << "swapByValue check: a = " << a << ", b = " << b << std::endl;

    swapByReference(&a, &b);
    std::cout << "swapByReference check: a = " << a << ", b = " << b << std::endl;

    std::cout << "\n--- Main Stack Addresses ---" << std::endl;
    std::cout << "&a: " << &a << std::endl;
    std::cout << "&b: " << &b << std::endl;
}