#include <iostream>

using namespace std;

int main() {
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;
    const double pi = 3.14159;
    double area = pi * radius * radius;
    double circumference = 2 * pi * radius;
    cout << "Area of the circle = " << area << endl;
    cout << "Circumference of the circle = " << circumference << endl;
    return 0;
}