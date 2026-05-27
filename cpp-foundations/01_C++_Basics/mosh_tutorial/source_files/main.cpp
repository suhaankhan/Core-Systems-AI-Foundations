#include <iostream>

using namespace std;

int main() {
    cout << "Enter the temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32)*5.0/9.0;
    cout << "Temperature in Celsius: " << celsius << endl;
    return 0;
}