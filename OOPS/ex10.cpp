/*
Creating a Constructor
Constructor is a special member function with same name as of the class.it is used to intialize the objects of its class.it is automatically invoked whenever an object is created.

*/

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void); // Constructor declaration
    void printNumber()
    {
        cout << "The number is " << a << "+" << b << "i" << endl;
    }
};
Complex::Complex(void)
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
}

// Properties/Characteristics of Constructor
/* 1.It should be declared in the public section of the class with the same name of the class.
2. They are automatically invoked whenever the object is created
3. They cannot return values and do not have return types.
4.It can have default argumets.
5.We cannot refer to their address.
 */
