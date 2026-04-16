#include <iostream>
#include <cmath>

using namespace std;

double pi() {
    return 3.14159;
}

double calcArea(double radius) {
    return pi() * pow(radius, 2);
}

double calcCircumference(double radius) {
    return 2 * pi() * radius;
}

int main() {
    double radius;
    cout << "Enter the radius : ";
    cin >> radius;

    double area = calcArea(radius);
    cout << "Area of the circle is : " << area << endl;

    double circumference = calcCircumference(radius);
    cout << "Circumference of the circle is : " << circumference << endl;

    return 0;
}
