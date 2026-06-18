#include <iostream>

int main()
{
    int a = 10;
    int *p = &a;

    std::cout << "Address p is: " << p << "\n"; // if p is 2002
    std::cout << "Value at address p is: " << *p << "\n";
    std::cout << "Size of integer is " << sizeof(int) << " Bytes\n";
    std::cout << "Address (p+1) is: " << p+1 << "\n"; // then (p + 1) will be 2006 i.e (2002 + 4) since the size of a integer is 4 bytes.
    std::cout << "Value at address (p+1) is: " << *(p + 1) << "\n";
}