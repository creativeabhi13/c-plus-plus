// Constructor overloading
// we can do multiple consturctor like this
#include <iostream>
using namespace std;
class Complex
{
public:
    int a, b;
    Complex(int x, int y) // this will work when you pass two argument .
    {
        a = x;
        b = y;
    }
    Complex(int x) // This will run when you pass one argument.
    {
        a = x;
        b = 0;
    }
    void printData()
    {
        cout << "The complex Number is " << a << " +" << b << "i" << endl;
    }
};
int main()
{
    Complex c1(2, 3);
    c1.printData();
    Complex c2(5);
    c2.printData();
}