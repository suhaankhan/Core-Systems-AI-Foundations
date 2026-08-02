#include <iostream>

struct rectangle {
    int length;
    int breadth;
};

// Initializes the properties of the structure
void initialize(rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

// Calculates and returns the area 
int area(rectangle r) {
    return r.length * r.breadth;
}

// Calculates and returns the perimeter
int perimeter(rectangle r) {
    return 2 * (r.length + r.breadth);
}

// Changes the length by address using the arrow operator
void change_length(rectangle *r, int new_length) {
    r->length = new_length;
}

int main() {
    rectangle rect;
    
    // Initializing the structure properties
    initialize(&rect, 10, 5);
    
    std::cout << "--- Initial Struct Values ---" << "\n";
    std::cout << "Area: " << area(rect) << "\n";
    std::cout << "Perimeter: " << perimeter(rect) << "\n\n";
    
    // Modifying the structure state
    change_length(&rect, 20);
    
    std::cout << "--- After Modifying Length ---" << "\n";
    std::cout << "New Area: " << area(rect) << "\n";
    std::cout << "New Perimeter: " << perimeter(rect) << "\n";
    
    return 0;
}