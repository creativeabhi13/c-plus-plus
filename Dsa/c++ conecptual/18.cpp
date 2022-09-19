
/*
 palindrome or not
*/
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    int rev = 0;

    while (num != 0)
    {
        int rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    cout << rev << " ";

    if (num == rev)
    {
        cout << " is Palindrome" << endl;
    }
    else
    {
        cout << " is Palindrome" << endl;
    }
}
