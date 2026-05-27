#include <iostream>

void Click(int i) {
    static int count = 0;
    count++;
    std::cout << i + 1 << ". Clicks: [" << count << "]" << std::endl;  
}

int main() {
    for (int i = 0; i < 10 ; i++) {
        Click(i);
    }
    return 0;
}