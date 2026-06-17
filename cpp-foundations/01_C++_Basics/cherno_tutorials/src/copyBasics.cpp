#include <iostream>
#include <cstring> // For strlen and strcpy

// Copying and Copy Constructors

class String {
private:
    char* m_Buffer;
public:
    String(const char* string) {
        m_Buffer = new char[strlen(string) + 1];
        strcpy(m_Buffer, string);
    }

    // THE COPY CONSTRUCTOR (Handles the Deep Copy)
    // If i comment this entire block out, the code will crash with a "Double Free"
    String(const String& other) {
        std::cout << "Deep copy triggered!\n";
        m_Buffer = new char[strlen(other.m_Buffer) + 1]; // Allocate fresh heap space
        strcpy(m_Buffer, other.m_Buffer);               // Copy the actual text content
    }

    char* GetBuffer() { 
        return m_Buffer;
    }

    ~String() {
        delete[] m_Buffer; // Cleans up the heap memory
    }

    void Print() const { std::cout << m_Buffer << "\n"; }
};

int main() {
    String s1("Hello");
    String s2 = s1; // This line triggers the copy constructor
    
    s2.GetBuffer()[1] = 'a';

    s1.Print();
    s2.Print();

    return 0;
}