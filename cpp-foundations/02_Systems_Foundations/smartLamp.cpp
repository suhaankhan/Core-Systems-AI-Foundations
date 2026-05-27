#include <iostream>

class smartLamp {
private:
    int brightness;
    
public:
    const char* roomName;

    void initialBrightness(int level) {
        brightness = level;
    }

    void dim(int amount) {
        brightness = brightness - amount;
        if (brightness < 0) {
            brightness = 0;
        }
    }

    void brighten(int amount) {
        brightness = brightness + amount;
        if (brightness > 100) {
            brightness = 100;
        }
    }

    void showstatus() {
        std::cout << "[" << roomName << "]" << std::endl;
        std::cout << "Current Brightness: " << brightness << std::endl;
    }
};

int main () {
    smartLamp myLamp;
        myLamp.roomName = "Bedroom";
        myLamp.initialBrightness(35);
        myLamp.dim(15);
        myLamp.brighten(90);
        myLamp.showstatus();

    return 0;
}