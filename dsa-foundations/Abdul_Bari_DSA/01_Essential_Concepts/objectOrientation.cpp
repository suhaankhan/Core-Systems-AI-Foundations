#include <iostream>

class rectangle {
private:
    int length;
    int breadth;

public:
    rectangle(int len, int bre) {
        length = len;
        breadth = bre;
    }

    int area() {
        return length * breadth;
    }

    void change_length(int len) {
        length = len;
    }
};

int main() {
    rectangle r{10, 5};
    std::cout << "Area: " << r.area() << "\n\n";

    r.change_length(20);
    std::cout << "--- After Modifying Length ---" << "\n";
    std::cout << "New Area: " << r.area() << "\n\n";

    return 0;
}