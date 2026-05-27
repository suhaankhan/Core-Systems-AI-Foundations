#include <iostream>

int main () {
    int myData[3] = {10, 20, 30};
    for (int i = 0; i < 3; i++) {
        std::cout << "Element " << i << " is at: " << &myData[i] << std::endl;
    }

    return 0;
}