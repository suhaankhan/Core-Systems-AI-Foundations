#include "log.h"
#include "math.h"

int main() {
    initLog();
    log("testing the modular header setup");

    int a1 = 5;
    float b2 = 5.3f;
    double c3 = 6.4;

    log("math and variables are working");

    multiply();
    
    return 0;
}