#include <iostream>

struct rectangle{
    int length = 0;
    int breadth = 0;
};

int main() {
    rectangle r = {5,7};
    rectangle *p = &r;

    std::cout << r.length << "\n";

    r.length = 15; // For a normal variable, use dot operator
    std::cout << r.length << "\n";

    (*p).length = 20; // For a pointer, either you can use "*ptr" with a dot operator 
    // (remember to enclose the ptr with parenthesis())
    std::cout << p -> length << "\n";

    p -> length = 30; // OR you can use the arrow operator (recommended)
    std::cout << p -> length << "\n\n";
    // Therefore, for accessing structure using pointer, arrow is used. 

    // Creating an object dynamically in a Heap using pointer
    rectangle *x = new rectangle{100, 200}; // Allocating and initializing right on the Heap

    x -> length = 110; // Using the arrow operator to change the values
    x -> breadth = 220;
    std::cout << x -> length << "\n";
    std::cout << x -> breadth << "\n";

    delete x; // Always clean it up to avoid memory leaks
    x = nullptr;
}