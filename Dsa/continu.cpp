/*
continue:-it is a keyword which we will use when we want to skip the next statement after the continue;


*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << "hi" << endl;
        cout << "hey" << endl;
        continue;

        cout << "hi this is abhishek " << endl;
    }
}