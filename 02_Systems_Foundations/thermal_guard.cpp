#include <iostream>

int main() {
    float temp = 40.0f;
    int cycles = 0;

    while (temp < 90.0) {
        int load;
        
        std::cout << "Status: " << temp << " C | Cycles: " << cycles << "\n";
        std::cout << "Set Load (1-10, 0 to quit): ";
        std::cin >> load;

        if (load == 0) break;

        if (temp > 70.0) {
            std::cout << "!! Throttling Performance !!\n";
            temp += (load * 0.75f);
        } else {
            temp += (load * 1.5f);
        }

        if (load < 3) {
            temp -= 2.0f;
        }

        cycles++;
    }

    if (temp >= 90.0) {
        std::cout << "\nSYSTEM FAILURE: CPU reached " << temp << "C. Shutdown.\n";
    }

    std::cout << "Final Uptime: " << cycles << " cycles.\n";
    return 0;
}