#include <iostream>
#include <string>

// The Arrow Operator ( -> ) is a shortcut for dereferencing a pointer (*) and accessing a member (.)

class Entity {
public:
    void Hello() const {
        std::cout << "hello! what's good\n";
    }
};

int main() {
    Entity e;
    Entity* ptr = &e; // A pointer holding the memory address of our object

    std::cout << "--- Accessing via object reference ---\n";
    e.Hello(); // Standard dot operator

    std::cout << "\n--- Accessing via pointer (The Long Way) ---\n";
    (*ptr).Hello(); // Manually dereferencing, then using dot

    std::cout << "\n--- Accessing via pointer (The Arrow Operator Shortcut) ---\n";
    ptr->Hello(); // The exact same thing, but clean!

    return 0;
}