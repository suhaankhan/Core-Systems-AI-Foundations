#include <iostream>
#include <vector>
#include <string>

// Goal: Prevent unnecessary memory reallocations and object copying.

class Vertex {
public:
    int x, y;

    inline static int creations = 0;
    inline static int copies = 0;
    
    Vertex(int x, int y)
    : x(x), y(y) 
    {
        creations++;
        std::cout << "Created fresh object! [" << creations << "]\n";
    }

    // Copy Constructor to spy on copies
    Vertex(const Vertex& other) 
    : x(other.x), y(other.y) {
        copies++;
        std::cout << "Copied! [" << copies << "]\n";
    }
};

int main() {
    std::cout << "--- NON-OPTIMIZED APPROACH ---\n";
    std::vector<Vertex> vertices1;
    vertices1.push_back(Vertex(1, 2));
    vertices1.push_back(Vertex(3, 4));
    vertices1.push_back(Vertex(5, 6));

    std::cout << "\n--- OPTIMIZED APPROACH ---\n";
    std::vector<Vertex> vertices2;
    
    // 1. Reserve the exact capacity we need
    vertices2.reserve(3); 

    // 2. Construct the objects directly in place inside the vector memory
    vertices2.emplace_back(1, 2); 
    vertices2.emplace_back(3, 4);
    vertices2.emplace_back(5, 6);

    return 0;
}