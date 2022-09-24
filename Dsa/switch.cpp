#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter the operator" << endl;
    cin >> a >> b >> op;
    switch (op)
    {
    case '+':
        cout << "Addition"
             << " " << a + b << endl;
        break;
    case '-':
        cout << "Subtraction"
             << " " << a - b << endl;
        break;
    case '*':
        cout << "Multiplication"
             << " " << a * b << endl;
        break;
    case '/':
        cout << "Division"
             << " " << a / b << endl;
        break;
    default:
        cout << "invalid operator" << endl;
    }
}