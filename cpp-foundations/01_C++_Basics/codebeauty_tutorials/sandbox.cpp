#include <iostream>
#include <fstream>
#include <string>

int main() {
    // 1. Create and write to the file
    std::ofstream outFile("sandbox.txt");

    // Checking if something went wrong (like restricted folder permissions)
    if (!outFile.is_open()) {
        std::cerr << "Couldn't open sandbox.txt to write into it!\n";
        return 1;
    }

    outFile << "Hello from the C++ Sandbox!\n";
    outFile << "This text file was automatically created by C++.\n";
    outFile << "Line 3: Learning fstream fundamentals.\n";
    
    outFile.close();
    std::cout << "Successfully wrote to sandbox.txt\n\n";

    // 2. Now let's try to read it back
    std::ifstream inFile("sandbox.txt");

    if (!inFile.is_open()) {
        std::cout << "Error opening file for reading\n";
        return 1;
    }

    std::string line;
    // Grabs lines one by one until the file runs out of text
    while (std::getline(inFile, line)) {
        std::cout << "Found line: " << line << "\n";
    }

    inFile.close();
    return 0;
}