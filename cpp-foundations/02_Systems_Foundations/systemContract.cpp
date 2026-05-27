#include <iostream>

// The Interface: This is just a set of rules. No one can build a "Device".
class Device {
public:
    virtual void Activate() = 0; // The "= 0" is the contract every child must sign.
};

class Lamp : public Device {
public:
    // Fulfills the contract. Lamp is now a real object we can use.
    void Activate() override {
        std::cout << "Lamp is glowing bright!" << std::endl;
    }
};

class MotionSensor : public Device {
public:
    // This class is a slacker, it didnt implement Activate().
    // Because its missing a piece of the blueprint, its still abstract.
    void DetectMovement() {
        std::cout << "Movement detected!" << std::endl;
    }
};

int main() {
    // Works: The blueprint is finished.
    Device* myGadget = new Lamp();
    myGadget->Activate();

    // FAIL: You cant instantiate an idea (abstract class).
    // Device* generic = new Device(); 

    // FAIL: Still abstract because its missing the Activate() logic.
    // Device* mySensor = new MotionSensor();
    
    // This is just a signpost. 8 bytes of memory to hold an address.
    // Its empty (nullptr), so no object actually exists yet.
    MotionSensor* ptr = nullptr; 

    delete myGadget; // Clean up the heap or deal with leaks later.
    
    return 0;
}