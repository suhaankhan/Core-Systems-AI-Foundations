#include <iostream>

class VaultAccess {
private:
    int accessLevel;
    static int s_totalAttempts;

public:

    void Init(int level) {
        accessLevel = level;
    }

    void logAccess() {
        s_totalAttempts++;
        std::cout << "Access logged at Level [" << accessLevel << "]. Total system hits: [" << s_totalAttempts << "]." << "\n";
    }
};

int VaultAccess::s_totalAttempts = 0;

int main () {

    VaultAccess attempt1;
    attempt1.Init(1);
    attempt1.logAccess();

    VaultAccess attempt2;
    attempt2.Init(5);
    attempt2.logAccess();

    VaultAccess attempt3;
    attempt3.Init(10);
    attempt3.logAccess();

    return 0;
}
