#include <iostream>

class NetworkScanner {
public:
    enum ConnectionStatus{
        DISCONNECTED = 0, CONNECTING, CONNECTED
    };

private:
    ConnectionStatus m_Status;

public:
    void UpdateStatus(ConnectionStatus newStatus) {
        if (newStatus == ConnectionStatus::CONNECTED) {
            std::cout << "System Online" << std::endl;
        }

        else if (newStatus == ConnectionStatus::CONNECTING) {
            std::cout << "Connecting to The System..." << std::endl;
        }

        else {
            std::cout << "System Disconnected!" << std::endl;
        }
    }
};

int main () {
    NetworkScanner hub1;
    hub1.UpdateStatus(NetworkScanner::CONNECTING);

    NetworkScanner hub2;
    hub2.UpdateStatus(NetworkScanner::CONNECTED);

    NetworkScanner hub3;
    hub3.UpdateStatus(NetworkScanner::DISCONNECTED);

    std::cout << "Memory size of Enum: " << sizeof(NetworkScanner::ConnectionStatus) << " bytes" << std::endl;

    return 0;
}