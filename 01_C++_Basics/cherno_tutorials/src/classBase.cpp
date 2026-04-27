#include <iostream>

class Box {
public:
    int a, b;

    void show() {
        std::cout << a << " " << b << std::endl;
    }
};

int main() {
    Box myBox;
    myBox.a = 10;
    myBox.b = 20;

    myBox.show();

    return 0;
}