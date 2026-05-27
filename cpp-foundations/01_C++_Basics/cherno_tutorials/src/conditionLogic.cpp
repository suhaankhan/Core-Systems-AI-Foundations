#include <iostream>

int main() {
    int num;
    std::cout << "Enter a Number : ";
    std::cin >> num;

    if (num == 0) {
        std::cout << "Null state." << std::endl;
    }

    else if (num == 1) {
        std::cout << "Identity Found." << std::endl;
    }
    else if (num > 10) {
        std::cout << "Invalid Input!!!" << std::endl;
        return 0;
    }
    
    bool found = false;
    int count = 0;
    while (count <= num) {
        if (count == 7) {
            std::cout << count << ": Target found" << std::endl;
            found = true;
            break;
        }
        else if (count == 0) {
            std::cout << count << ": Start point" << std::endl;
        }
        else {
            std::cout << count << std::endl;
        }

        count++;
    }

    if (found == true) {
        std::cout << "--- The END ---" << std::endl;
    }
    else {
        std::cout << "Target not Found!!!" << std::endl;
    }
    return 0;
}