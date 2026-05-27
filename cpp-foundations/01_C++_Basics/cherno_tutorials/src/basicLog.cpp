#include <iostream>
#include "basicLog.h"

using namespace std;

void initLog() {
    cout << "-initializing log system-" << endl;
}

void log(const char* message) {
    cout << "[chern-o-log]" << message << endl;
}