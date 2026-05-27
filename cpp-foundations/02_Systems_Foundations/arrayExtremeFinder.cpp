#include <iostream>

int main() {
    int readings[] = {15, 42, 2, 89, -10, 55, -3};
    int n = 7;

    int max = readings[0];
    int min = readings[0];

    for (int i = 1; i < n; i++) {
        if (readings[i] > max) {
            max = readings[i];
        }
            
        else if (readings[i] < min) {
            min = readings[i];
        }
    }

    std::cout << "---Extreme Values---" << std::endl;
    std::cout << "Peak Value: " << max << std::endl;
    std::cout << "Lowest Value: " << min << std::endl;

    return 0;
}