#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "The letter is in upper case " << endl;
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "The letter is in lower case " << endl;
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "The letter is digit " << endl;
    }
}