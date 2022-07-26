// Copy Constructor- it will make copy of the diff object.
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor called";

        a = obj.a;
    }
    Number()
    {
        a = 0;
    } // default constructor &

    void display()
    {
        cout << "The number of the object is " << a << endl;
    }
};
int main()
{
    Number n = Number(5);
    n.display();
    Number m(6);
    m.display();
    Number n1;
    n1.display();
    Number z1(n1);
    z1.display();
}