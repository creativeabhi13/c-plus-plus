// Types of constructors
/* 1. Parametrized Constructor
   2. Default COnstructor */

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    //  Complex(void); //Default Constructor declaration
    Complex(int x, int y); // Parametrized Constructor declaration

    void printNumber()
    {
        cout << "The complex number is " << a << " + " << b << "i" << endl;
    }
};

/* Complex ::Complex(void) // ------> This is a default Constructor as it takes no parameter and run automatically behind the scene.
{
    a = 20;
    b = 35;
} */

Complex ::Complex(int x, int y) // This is a Parametrized Constructor . it takes parameter/values from the user and set it.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex c1(4, 6);
    // Explicit call
    Complex c2 = Complex(10, 5);
    c1.printNumber();
    c2.printNumber();
}