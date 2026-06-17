#include <iostream>

// A local static variable retains its value across multiple function calls.

void IncrementAndPrint() {
    int normalVariable = 0;         // Reset to 0 every single time called
    static int staticVariable = 0;  // Initialized ONCE. Persists in memory.

    normalVariable++;
    staticVariable++;

    std::cout << "Normal: " << normalVariable << " | Static: " << staticVariable << "\n";
}

int main() {
    std::cout << "--- Calling Function 3 Times ---\n";
    IncrementAndPrint(); 
    IncrementAndPrint(); 
    IncrementAndPrint(); 

    return 0;
}