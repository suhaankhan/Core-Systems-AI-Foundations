#include <iostream>

int main() {
    // This is a standard integer
    int my_goal = 100; 

    std::cout << "--- 100-Day Roadmap Day 1 ---" << std::endl;
    std::cout << "Target Goal: " << my_goal << " days." << std::endl;

    // The '&' symbol is a 'pointer' - it tells us WHERE this data lives in your RAM
    std::cout << "Memory Location: " << &my_goal << std::endl;

    return 0;
}