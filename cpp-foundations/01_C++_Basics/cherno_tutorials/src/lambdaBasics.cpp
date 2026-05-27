#include <iostream>

int main() 
{
    int count = 0;

    // The 'mutable' keyword allows us to change the captured 'count' variable inside the lambda.
    auto incrementer = [count]() mutable
    {
        count++;
        std::cout << "Inside Lambda: " << count << "\n";
    };

    incrementer(); // Runs the lambda code once
    incrementer(); // Runs the lambda code a second time.

    std::cout << "Outside Lambda: " << count << "\n";

    return 0;
}