#include <iostream>

int add(int a, int b) { // These 'a' and 'b' are formal parameters.
    // They are allocated on the Stack when the function is called
    // and their memory is popped/freed as soon as the function returns.
    int c = a + b;
    return c;
}

int main() {
    int x = 10;
    int y = 15;

    int sum = add(x, y);
    std::cout << "Sum is: " << sum << "\n";
    return 0;
}