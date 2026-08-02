#include <iostream>

struct rectangle {
    int length;
    int breadth;
};

// Struct wrapping an array to prove pass-by-value deep copying
struct test_struct {
    int A[5];
    int n;
};

// 1. Pass by Value - Creates a duplicate on the Stack. Original remains untouched.
void change_length_value(rectangle r) {
    r.length = 99; // Only changes the local copy inside this stack frame
}

// 2. Pass by Reference - Pure alias. Modifies the original object directly.
void change_length_reference(rectangle &r) {
    r.length = 50; // Directly modifies the original structure
}

// 3. Pass by Address - Uses pointers and the arrow operator to modify the original object.
void change_length_address(rectangle *p) {
    p->length = 100; // Modifies original via arrow operator
}

// Function that dynamically creates a struct on the Heap and returns its pointer
rectangle* create_rectangle() {
    rectangle *p_heap = new rectangle{15, 30}; // Allocating right on the Heap
    return p_heap;
}

// Modifies an array inside a struct passed by value (should fail to change main)
void manipulate_internal_array(test_struct t) {
    t.A[0] = 999; // Modifies the stack copy array, not main's array!
}

int main() {
    // --- Testing Pass by Value, Reference, and Address ---
    rectangle r1 = {10, 20};
    
    // Pass by Value check
    change_length_value(r1);
    std::cout << "--- Pass by Value ---" << "\n";
    std::cout << "Length: " << r1.length << "\n\n"; // Will still print 10
    
    // Pass by Reference check
    change_length_reference(r1);
    std::cout << "--- Pass by Reference ---" << "\n";
    std::cout << "Length: " << r1.length << "\n\n"; // Will print 50
    
    // Pass by Address check
    change_length_address(&r1);
    std::cout << "--- Pass by Address ---" << "\n";
    std::cout << "Length: " << r1.length << "\n\n"; // Will print 100


    // --- Testing Struct Allocation on Heap via Function ---
    rectangle *my_heap_rect = create_rectangle();
    
    std::cout << "--- Heap Struct via Function ---" << "\n";
    std::cout << "Heap Length: " << my_heap_rect->length << "\n";
    std::cout << "Heap Breadth: " << my_heap_rect->breadth << "\n\n";
    
    // Always clean up heap space to prevent leaks!
    delete my_heap_rect;
    my_heap_rect = nullptr;

    // --- Deeper Mechanical Check: Array Inside Struct ---
    test_struct ts = {{2, 4, 6, 8, 10}, 5};
    manipulate_internal_array(ts);
    
    std::cout << "--- Array Inside Struct Pass by Value Proof ---" << "\n";
    std::cout << "ts.A[0]: " << ts.A[0] << " (Remains 2 because whole array was deep copied to stack)" << "\n";

    return 0;
}