#include <iostream>
#include <string>

int main() 
{
    int speed = 0;
    std::string level = "Safe";

    std::cout << "Enter driving speed: ";
    std::cin >> speed;

    // level = (condition) ? value_if_true : value_if_false;
    level = (speed < 81) ? "Safe" : "Speeding";

    // Tier 1: Under 61 -> $0 fine
    // Tier 2: Under 91 -> $100 fine
    // Tier 3: 91 or over -> $500 fine
    int fine = (speed < 81) ? 0 
        : (speed < 121) ? 100
        : 500;


    std::cout << "Ticket Fine: $" << fine << "\n";

    return 0;
}