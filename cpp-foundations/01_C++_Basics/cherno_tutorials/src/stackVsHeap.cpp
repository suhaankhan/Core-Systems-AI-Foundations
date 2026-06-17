#include <iostream>

// Stack: Automatic, fast, small, clean.
// Heap: Manual (requires 'new'/'delete'), slower, massive, persistent.

struct Vector3 {
    float x, y, z;
};

int main() {
    std::cout << "--- Allocating on the Stack ---\n";
    {
        // Born on the stack when this scope starts
        Vector3 stackVector = { 1.0f, 2.0f, 3.0f };
        std::cout << "Stack address: " << &stackVector << "\n";
    } // stackVector is AUTOMATICALLY destroyed right here!

    std::cout << "\n--- Allocating on the Heap ---\n";
    Vector3* heapVectorPtr = nullptr;
    {
        // Allocated on the heap using 'new'. 
        // 'heapVectorPtr' lives on the stack, but points to memory on the heap.
        heapVectorPtr = new Vector3{ 4.0f, 5.0f, 6.0f };
        std::cout << "Heap address:  " << heapVectorPtr << "\n";
    } // The pointer variable scope ends, but the memory on the heap stays ALIVE!

    std::cout << "Heap data is still accessible: " << heapVectorPtr->x << "\n";

    // Because it's on the heap, we MUST clean it up manually
    delete heapVectorPtr; 
    std::cout << "Heap memory manually freed.\n";

    return 0;
}