#include <iostream>

class Device {
protected:
    float X = 0.0f;
    float Y = 0.1f;

public:
    void PowerOn() {
    std::cout << "Device is now drawing power..." << std::endl;
    }
};

class Router : public Device {
public:
    void Connect() {
        std::cout << "Establishing network link..." << std::endl;

        std::cout << "X = " << X << "\nY = " << Y << std::endl;
    }
};

int main () {
    
    Router MyDevice;
    MyDevice.PowerOn();
    MyDevice.Connect();

    return 0;
}