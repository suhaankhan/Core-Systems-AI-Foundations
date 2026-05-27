#include <iostream>

class vector2D 
{
private:
    // C++ allocates memory for these in this exact order: 'x' first, then 'y'.
    int x;
    int y;

public:
    // This colon list is the fastest way to initialize variables.
    // Rule: Always write them left to right matching the order above (x then y).
    // If you dont, the compiler ignores your list order anyway and can cause random bugs.
    vector2D(int a, int b)
        : x(a), y(b) 
    {
        std::cout << "Initialization done! x: " << x << ", y: " << y << "\n";
    }
};

int main() {
    vector2D vec(10, 20);
    return 0;
}