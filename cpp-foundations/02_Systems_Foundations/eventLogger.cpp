#include <iostream>

class Event {
protected:
    const char* m_timestamp;
    int m_severity;

public:
    Event (const char* timestamp, int severity) 
        : m_timestamp(timestamp), m_severity(severity) {}

    void LogBase() {
        std::cout << "Time Stamp: " << m_timestamp << std::endl;
        std::cout << "Severity Level: " << m_severity << std::endl;
    }
};

class DiskError : public Event {
private:
    const char* m_driveLetter;

public:
    DiskError (const char* timestamp, int severity, const char* drive) 
        : Event(timestamp, severity), m_driveLetter(drive) {}

    void Report() {
        std::cout << "Critical Error on Drive [" << m_driveLetter << "] at [" << m_timestamp << "]" << std::endl;

        std::cout << "Alert Level: [" << m_severity << "]" << std::endl;
    }
};

int main() {
        DiskError Error("22:00", 5, "D:");
        Error.Report();

    return 0;
}