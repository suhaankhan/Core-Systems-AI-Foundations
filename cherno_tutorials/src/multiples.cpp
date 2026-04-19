#include <iostream>

int main() {
    int limit;
    std::cout << "Enter Limit : ";
    std::cin >> limit;

    int sum = 0;

    for(int i = 0; i < (limit + 1); i++) {
        if (i == 13)
        break;

        if ( i % 3 == 0)
        continue;

        sum = sum + i;

    if ( i % 5 == 0) {
        std::cout << i << ", High Five!" << std::endl;}
        else {
            std::cout << "Adding " << i << std::endl;
        }
    }
    std::cout << "=================" << std::endl;
    
    std:: cout << "Sum of these numbers is : " << sum << std::endl;

    return 0;
}