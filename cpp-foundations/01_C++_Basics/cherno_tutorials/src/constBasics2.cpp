#include <iostream>

class Entity
{
private:
    int m_X, m_Y;

    int* m_A, m_B; // Visually makes it clearer that the * belongs only to m_A therefore, here m_A is a pointer and m_B is an int.

    int* m_M, *m_N; // Clearer that both are pointers and hence, here both m_M and m_N are pointers;

    mutable int var; // the mutable keyword allows us to change the value of "var" even if we are inside a const method.

public:
    int GetX() const 
    {
        /* m_X = 3; "We cant modify the value of m_X inside the GetX() function
        * because it promises to be constant and not change the values."
        */ 

       var = 2; // can modify it since it is mutable.
        return m_X;
    }

    const int* const GetA() const 
/*
 * 1. const int* : The DATA being pointed to cannot be modified.
 * 2. * const GetA()   : The POINTER ADDRESS being returned cannot be modified/reassigned.
 * 3. () const         : This METHOD cannot modify any member variables of the class (except mutable ones).
 */
    {
        return m_A;
    }
};

int main() 
{
    return 0;
}