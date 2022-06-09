// Freind FunctionS
// when we try to access private data from outside theb class then we cannot do that to do that we need freind function inside the classs so that we can access the data.
#include <iostream>
using namespace std;

class Complex
{
    int a;
    int b;

public:
    void setNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    // freind function decalaration so that sumcomplex can use private data .
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "Your complex Number is " << a << " + " << b << "i" << endl;
    }
};
// sumcomplex  function allowing to  the accessing the data
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 2);
    c1.printNumber();
    c2.setNumber(3, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
}

/* Properties
1. Not in the scope of the class
2. Sicne it is not in the scope of the class, it cannot be called from the object of the class;
c1.sumcomplex()==invalid
3.it can be without the help of anyobject
4. it usually contain the object as arguments.
5. it can declared inside the private or public section of the classs
it mean we can write anywhere in the class
6. it cannot access the member directly by their names and need object_name and meneber of the function.
*/