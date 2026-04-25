#include <iostream>

int main() {
    int num;

    std::cout << "Enter a Number : ";
    std::cin >> num;

    std::cout << "SQUARE : \n";
    for (int i=0 ; i < num ; i++) {
        for (int j=0 ; j < num ; j++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    std::cout << std::endl;

    std::cout << "Triangle : \n";    
    for (int a=0 ; a < num ; a++) {
        for (int b = 0; b <= a ; b++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }

    std::cout << std::endl;
    std::cout << "Inverted Triangle : \n";
    for (int x=0 ; x < num ; x++) {
        for (int y = 0; y < num - x; y++) {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
    return 0;
}