#include <iostream>
#include <vector> // Required for std::vector

// A vector is a heap-allocated array that automatically resizes when full.

int main() {
    std::vector<int> scores;

    // Adding elements to the end of the vector
    scores.push_back(85);
    scores.push_back(92);
    scores.push_back(76);

    std::cout << "Vector current size: " << scores.size() << "\n";

    std::cout << "Scores list:\n";
    for (int s : scores) {
        std::cout << s << "\n";
    }

    return 0;
}