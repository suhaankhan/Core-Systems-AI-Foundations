#include <iostream>

using namespace std;

// I am deliberately using a header file to provide the closing brace.
int multiply(int a, int b)
{
    int result = a * b;
    return result;
    // The file "endbrace.h" contains only a single character i.e. "}"
#include "endbrace.h"

int main() {
    cout << multiply(7, 8) << endl;
    return 0;
}