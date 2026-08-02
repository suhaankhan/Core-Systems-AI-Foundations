#include <iostream>

// Arrays can ONLY be passed by address. They never get passed by value.
// The formal parameter 'int A[]' is actually an internal pointer 'int *A' under the hood.
void print_array(int A[], int size) {
    // A[0] = 100; // Un-commenting this would modify the original array in main!
    
    // CRUCIAL SYSTEM DETAIL:
    // Proving why we MUST pass 'size' explicitly. sizeof(A) here only gives the pointer size!
    std::cout << "--- Sizeof Proof Inside Function ---" << "\n";
    std::cout << "sizeof(A) inside function: " << sizeof(A) << " bytes (Size of an 8-byte pointer)" << "\n\n";

    std::cout << "--- Printing Array Elements ---" << "\n";
    for(int i = 0; i < size; i++) {
        std::cout << A[i] << "\n";
    }
    std::cout << "\n";
}

// Function that dynamically creates an array directly on the Heap and returns its address
int* create_array(int size) {
    int *p_heap = new int[size]; // Allocating right on the Heap
    
    // Initializing the heap array with some basic dummy values
    for(int i = 0; i < size; i++) {
        p_heap[i] = (i + 1) * 10;
    }
    
    return p_heap; // Returning the raw heap memory address
}

int main() {
    // 1. Passing a Stack-allocated array to a function
    int arr[] = {2, 4, 6, 8, 10};
    int n = 5;

    std::cout << "--- Sizeof Proof Inside main ---" << "\n";
    std::cout << "sizeof(arr) inside main: " << sizeof(arr) << " bytes (5 ints * 4 bytes = 20 bytes)" << "\n\n";
    
    print_array(arr, n);
    
    // 2. Creating and accessing an array dynamically on the Heap using a function
    int heap_size = 5;
    int *my_heap_ptr = create_array(heap_size);
    
    std::cout << "--- Printing Heap Array Elements ---" << "\n";
    for(int i = 0; i < heap_size; i++) {
        std::cout << my_heap_ptr[i] << "\n";
    }
    std::cout << "\n";
    
    // Always clean up the heap space to prevent leaks!
    delete [] my_heap_ptr;
    my_heap_ptr = nullptr;
    
    return 0;
}