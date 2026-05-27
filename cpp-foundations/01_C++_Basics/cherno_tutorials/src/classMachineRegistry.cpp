#include <iostream>

static int s_ConnectedMachines = 0; 

struct Machine {
    int machineID;

    void Register() {
        s_ConnectedMachines++;
        machineID = s_ConnectedMachines;
    }

    void ShowStatus() {
        std::cout << "Machine Registered with ID [" << machineID << "]" << std::endl;
    }
};

int main() {
    std::cout << "--- System Boot Sequence ---" << std::endl;

    Machine m1;
    m1.Register();
    m1.ShowStatus();

    Machine m2;
    m2.Register();
    m2.ShowStatus();

    std::cout << "----------------------------" << std::endl;
    std::cout << "Total active Machine: " << s_ConnectedMachines << std::endl;

    return 0;
}