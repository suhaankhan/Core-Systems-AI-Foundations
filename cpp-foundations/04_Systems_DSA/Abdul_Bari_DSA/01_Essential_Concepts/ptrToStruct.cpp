#include <iostream>

struct rectangle{
    int length = 0;
    int breadth = 0;
};

int main() {
    struct rectangle r = {5,7};
    struct rectangle *p = &r;

    std::cout << r.length << "\n";

    r.length = 15; // For a normal variable, use dot operator
    std::cout << r.length << "\n";

    (*p).length = 20; // For a pointer, either you can use "*ptr" with a dot operator
                      // (remember to enclose the ptr with parenthesis())
    std::cout << r.length << "\n";

    p -> length = 30; // or you can use the arrow operator (recommended)
    std::cout << r.length << "\n";
}