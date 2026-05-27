#include <iostream>

class Logger {
public:
    enum Level {
        Error = 0, Warning, Info
    };

private:
    Level m_LogLevel = Info;

public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void Warn(const char* message) {
        if (m_LogLevel >= Warning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void ErrorMsg(const char* message) {
        if (m_LogLevel >= Error)
            std::cout << "[ERROR]: " << message << std::endl;
    }
};

int main() {
    Logger log;
    
    // Set level to only show Errors
    log.SetLevel(Logger::Error);
    
    log.Warn("This will not print because level is set to Error.");
    log.ErrorMsg("This WILL print!");

    return 0;
}