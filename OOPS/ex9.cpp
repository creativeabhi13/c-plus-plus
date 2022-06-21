
// example of freind function
// swap of two number using freind function
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
class C2;
class C1
{
    int val;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int a)
    {
        val = a;
    }
    void display(void)
    {
        cout << val << endl;
    }
};

class C2
{
    int val2;
    friend void exchange(C1 &, C2 &);

public:
    void indata(int b)
    {
        val2 = b;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};
/*
swap technique

temp=a;
a=b;
b=temp;

*/
void exchange(C1 &x, C2 &y)
{
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}

int main()
{
    C1 oc1;
    C2 oc2;

    oc1.indata(34);
    oc2.indata(67);

    exchange(oc1, oc2);
    oc1.display();

    oc2.display();
}