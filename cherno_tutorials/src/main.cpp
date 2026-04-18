#include "log.h"

int main() {
    initLog();
    log("testing the modular header setup");

    int a = 5;
    float b = 5.3f;
    double c = 6.4;

    log("math and variables are working");
    return 0;
}