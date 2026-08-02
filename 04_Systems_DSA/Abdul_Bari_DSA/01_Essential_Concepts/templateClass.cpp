#include <iostream>

template <class T>
class Arithmetic {
private:
    T a;
    T b;

public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template <class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template <class T>
T Arithmetic<T>::add() {
    return a + b;
}

template <class T>
T Arithmetic<T>::sub() {
    return a - b;
}

int main() {
    Arithmetic<int> ar1(10, 5);
    
    std::cout << "--- Integer Template ---" << "\n";
    std::cout << "Add: " << ar1.add() << "\n";
    std::cout << "Sub: " << ar1.sub() << "\n\n";

    Arithmetic<float> ar2(10.5f, 5.2f);
    
    std::cout << "--- Float Template ---" << "\n";
    std::cout << "Add: " << ar2.add() << "\n";
    std::cout << "Sub: " << ar2.sub() << "\n";

    return 0;
}