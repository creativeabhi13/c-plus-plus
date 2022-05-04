// swap of two number using two number

#include <iostream>
using namespace std;
int main()
{
    int a, b, *p1 = &a, *p2 = &b;
    cout << "Enter the two number: " << endl;
    cin >> a >> b;
    cout << "The number before the swap *p1=" << *p1 << "  &  "
         << "*p2=" << *p2 << endl;

    // swap using pointer
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;

    cout << "The number after the swap *p1=" << *p1 << "  &  "
         << "*p2=" << *p2 << endl;
}