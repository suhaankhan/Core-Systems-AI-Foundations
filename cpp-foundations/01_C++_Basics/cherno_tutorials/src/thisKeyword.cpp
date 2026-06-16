#include <iostream>
#include <string>

// 'this' is just a pointer to the current object instance

class Player {
private:
    std::string name;
public:
    // 1. Unshadowing member variables
    Player(std::string name) {
        this->name = name; 
    }

    // 2. Returning the object itself
    Player& PrintMe() {
        std::cout << "Object address: " << this << "\n";
        return *this; 
    }
};

int main() {
    Player p1("Alice");
    Player p2("Bob");

    std::cout << "p1 main address: " << &p1 << "\n";
    p1.PrintMe();

    std::cout << "p2 main address: " << &p2 << "\n";
    p2.PrintMe();

    return 0;
}