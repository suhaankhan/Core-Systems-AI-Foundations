#include <iostream>

class CoffeeToken {
private:
    int m_Value;
public:
    // Put 'explicit' right before this constructor to block the implicit trap below
    CoffeeToken(int cash) : m_Value(cash) {}

    int GetValue() const { return m_Value; }
};

void BrewCoffee(CoffeeToken token) {
    std::cout << "Brewing: " << token.GetValue() << "\n";
}

int main() {
    // Normal usage
    CoffeeToken t(10);
    BrewCoffee(t);

    // The implicit trap: This should be a type error, but C++ silently builds 
    // a temporary CoffeeToken out of the number 5. 
    BrewCoffee(5); 

    // Once you add 'explicit' to the constructor, BrewCoffee(5) breaks the build.
    // You're forced to fix it manually: BrewCoffee(CoffeeToken(5));

    return 0;
}