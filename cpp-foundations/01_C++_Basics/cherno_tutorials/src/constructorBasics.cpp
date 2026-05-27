#include <iostream>

struct Entity {
    float X, Y;

    Entity() {
        X = 0.0f;
        Y = 0.0f;

        std::cout << "[Entity]: Created and Initialized!" << std::endl;
    }

    ~Entity() {
        std::cout << "[Entity]: Destroyed and Memory Cleared!" << std::endl;
    }

    void move() {
        X = 2.0f;
        Y = 3.2f;
        std::cout << "Final X = " << X << "\nFinal Y = " << Y << std::endl;
    }
};

int main () {
    std::cout << "---Program Starts---" << std::endl;

    {
        Entity player;

        std::cout << "Initial X: " << player.X << "\nInitial Y: " << player.Y << std::endl;

        player.move();
    }

    std::cout << "---Program Ends---" << std::endl;

    return 0;
}