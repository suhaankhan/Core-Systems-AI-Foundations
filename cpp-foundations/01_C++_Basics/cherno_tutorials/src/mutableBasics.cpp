#include <iostream>
#include <string>

class Entity
{
private:
    std::string m_name;
    mutable int m_DebugCount; // 'mutable' keyword allows this member variable to be modified even inside 'const' methods.

public:
    Entity() 
    {
        m_name = "Unknown";
        m_DebugCount = 0;
    }

    const std::string& Getname() const
{
    // 1. The FIRST 'const' ensures the caller cannot modify the returned 'm_name' string.
    // 2. The SECOND 'const' (at the end) promises this method won't alter the Entity's state.
    m_DebugCount++; // Works exclusively because m_DebugCount is marked 'mutable'
    return m_name;
}

    ~Entity ()
    {
        // This runs automatically right before the object gets deleted from memory.
        // i.e. it's like the object's "last breath" to print its final score.
        std::cout << "Debug Count : " << m_DebugCount << "\n";
    }
};

int main() 
{
    const Entity e;
    e.Getname();

    return 0;
}