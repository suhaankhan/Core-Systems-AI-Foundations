#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main () {
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));
    short die1 = (rand() % (maxValue - minValue + 1)) + minValue;
    short die2 = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << die1 << ", " << die2 << endl;
    return 0;
}

