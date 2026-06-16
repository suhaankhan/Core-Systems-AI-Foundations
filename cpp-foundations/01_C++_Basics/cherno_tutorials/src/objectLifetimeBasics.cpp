#include <iostream>
#include <string>

// Variables on the stack are automatically destroyed the instant they hit a closing brace '}'

class Spy {
private:
    std::string m_Name;
public:
    Spy(std::string name) : m_Name(name) {
        std::cout << m_Name << " entered the room.\n";
    }
    ~Spy() {
        std::cout << m_Name << " left the room.\n";
    }
};

int main() {
    std::cout << "--- Main Start ---\n";
    
    Spy s1("James"); // Lives until the end of main()

    {
        std::cout << "--- Scope Start ---\n";
        Spy s2("Ethan"); // Lives ONLY inside this explicit curly brace scope
        std::cout << "--- Scope End ---\n";
    } // <-- Ethan's destructor runs right here!

    std::cout << "--- Main End ---\n";
    return 0;
} // <-- James's destructor runs right here!