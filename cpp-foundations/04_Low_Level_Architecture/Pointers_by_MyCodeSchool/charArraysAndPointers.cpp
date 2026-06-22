#include <iostream>
#include <cstring>

int main() 
{
    char C1[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; 
    char C2[] = "Hello"; // String literal adds \0 automatically

    // sizeof includes the null terminator, strlen ignores it
    std::cout << "Size:   " << sizeof(C2) << std::endl; 
    std::cout << "Length: " << strlen(C2) << std::endl; 

    char* ptr = C2;
    
    // cout prints the entire string when given a char* instead of the address
    std::cout << "String via ptr: " << ptr << std::endl; 
    std::cout << "First char:     " << *ptr << std::endl;
    std::cout << "Second char:    " << *(ptr + 1) << std::endl;
}