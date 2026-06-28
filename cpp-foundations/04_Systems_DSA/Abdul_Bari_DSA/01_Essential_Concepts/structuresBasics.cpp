#include <iostream>

struct rectangle {
    int length = 0;
    int breadth = 0;
} r1, r2; // Declaring them here, makes them Global structs

struct student {
    int rollNo = 0; // 4 Bytes
    int standard = 0; // 4 Bytes
    char section = 'X'; // 1 Byte (+ 3 Bytes of automatic padding for CPU alignment)
};

struct rectangle r3, r4; // This is also another way of declaring Global Structs

int main() {
    struct rectangle r1;
    r1.length = 10;
    r1.breadth = 5;

    int area = r1.length * r1.breadth;

    std::cout << "Area of the Rectangle: " << area << "\n";

    struct student s1;
    s1.rollNo = 1;
    s1.standard = 12;
    s1.section = 'A';

    std::cout << "\nSize of r1 in Bytes: " << sizeof(r1) << "\n";
    std::cout << "Size of s1 in Bytes: " << sizeof(s1) << "\n"; // Returns 12 bytes instead of 9 due to structure padding. The compiler adds 3 dummy bytes after the char so the CPU can read the memory in efficient 4-byte chunks.
}