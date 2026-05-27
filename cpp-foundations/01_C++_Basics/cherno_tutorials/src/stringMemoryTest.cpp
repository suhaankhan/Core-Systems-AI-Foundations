#include <iostream>
#include <string>

int main() {
    std::string firstName = "Shhaan"; 
    firstName[1] = 'u';
    
    const char* lastName = "Khan"; 
    
    // lastName[2] = 'n';
    
    std::cout << "First Name: " << firstName << " at address: " << (void*)&firstName[0] << std::endl;
    std::cout << "Last Name: " << lastName << " at address: " << (void*)lastName << std::endl;

    return 0;
}