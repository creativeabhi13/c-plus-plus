/*

check whether character is vowel or consonant

*/
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character" << endl;
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'A' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'E')
        {
            cout << "The character is Caps and vowel" << endl;
        }
        else
        {
            cout << "he character is Caps and Consonant" << endl;
        }
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        if (ch == 'a' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'e')
        {
            cout << "The character is small and vowel" << endl;
        }
        else
        {
            cout << "he character is small and Consonant" << endl;
        }
    }
    else
    {
        cout << "it is not a character" << endl;
    }
}