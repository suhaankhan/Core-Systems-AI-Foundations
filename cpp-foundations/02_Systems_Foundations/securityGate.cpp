#include <iostream>
#include "gate.h"

int SecurityGate::s_globalCount = 0;

int main() {
    SecurityGate gateA;
    gateA.Setup(101);

    SecurityGate gateB;
    gateB.Setup(505);

    int totalInLine = 0;
    
    std::cout << "How many students are waiting?\n";
    std::cin >> totalInLine;

    for (int i = 0 ; i < totalInLine ; i++) {
        int studentID;
        std::cout << "Enter Student ID: ";
        std::cin >> studentID;

        if (i % 2 != 0) {
            gateB.CheckID(studentID);
        }
        else {
            gateA.CheckID(studentID);
        }
    }

    std::cout << "\n--- System Report ---" << std::endl;
    std::cout << "Total entries across all gates: " << SecurityGate::GetGlobal() << std::endl;

    return 0;
}