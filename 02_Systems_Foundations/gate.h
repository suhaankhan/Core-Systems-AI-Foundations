#pragma once
#include <iostream>

class SecurityGate {
private:
    int m_gateID;
    int m_localCount;
    static int s_globalCount;

public:
    void Setup(int id) {
        m_gateID = id;
        m_localCount = 0;
    }

    void CheckID(int studentID) {
        if (studentID > 0 && studentID < 100) {
            m_localCount++;
            s_globalCount++;
            std::cout << "Gate [" << m_gateID << "]: Access Granted.\n";
        }
        else {
            std::cout << "Gate [" << m_gateID << "]: Access Denied\n";
        }
    }

    static int GetGlobal() {
        return s_globalCount;
    }
};