// Freind classes and member funcgion
#include <iostream>
using namespace std;
// forward Declaration
class Complex;
class Calculator
{
public:
    int add(int num1, int num2)
    {
        return (num1 + num2);
    }
    int sumRealComplex(Complex, Complex);
    ;
    int sumComComplex(Complex, Complex);
};
class Complex
{

    int a, b;
    // individually declaring function as friend
    /*  friend int Calculator ::sumRealComplex(Complex, Complex);
     friend int Calculator ::sumComComplex(Complex, Complex); */

    // Aliter declaring the entire fn class as friend
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your Number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex n1, Complex n2)
{
    return n1.a + n2.a;
}

int Calculator ::sumComComplex(Complex m1, Complex m2)
{
    return m1.b + m2.b;
}
int main()
{
    Complex o1, o2;
    o1.setNumber(1, 4);
    o2.setNumber(5, 7);
    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of the Real part of o1 and o2 is :" << res << endl;
    int resc = calc.sumComComplex(o1, o2);
    cout << "The sum of the Complex part of o1 and o2 is :" << resc << endl;
}