#include <iostream>

class DatabaseConnection {
public:
    enum Protocol {
        HTTP = 0, HTTPS, FTP
    };

private:
    const char* m_ServerName;
    Protocol m_Protocol;
 
public:
    DatabaseConnection(const char* servername)
        : m_ServerName(servername), m_Protocol(HTTPS)
    {
        std::cout << "CONNECTING to [" << m_ServerName <<  "] via [" << m_Protocol << "]..." << std::endl;
    }

    ~DatabaseConnection() {
        std::cout << "DISCONNECTING from [" << m_ServerName << "]... Connection closed safely." << std::endl;
    }

    void SendData(const char* data) {
        std::cout << "Sending: [" << data << "] to [" << m_ServerName << "]..." << std::endl;
    }
};

int main () {
    std::cout << "---Program Starts---" << std::endl;

    {
        DatabaseConnection db("My-Server");
        db.SendData("Top Secret Packets");
    }

    std::cout << "--- Program End ---" << std::endl;

    return 0;
}