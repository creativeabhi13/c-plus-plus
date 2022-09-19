/*
A program to find All roots of quadratic eqaution
*/
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float roots1, roots2;
    int a, b, c;

    cout << "Enter the coefficeint of roots a b and c" << endl;
    cin >> a >> b >> c;
    float D = b * b - 4 * a * c;
    if (D > 0)
    {
        cout << "Roots are real and distinct" << endl;
        roots1 = (-b + sqrt(D)) / (2 * a);
        roots2 = (-b - sqrt(D)) / (2 * a);
        }
    else if (D == 0)
    {
        cout << "Roots are real and Equal" << endl;
        roots1 = roots2 = (-b) / (2 * a);
    }
    else
    {
        cout << "Roots are real and imaginary" << endl;
        roots1 = (-b) / 2 * a + sqrt(-D) / (2 * a);
        roots2 = (-b) / 2 * a - sqrt(-D) / (2 * a);
    }
    cout << "the roots are "
         << " " << roots1 << " and " << roots2 << endl;
}