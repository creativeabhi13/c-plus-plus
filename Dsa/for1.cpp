/*

// For Loop :-
for (intialization;condition;updation)
{
    \\ block of code


}
// it is similar to the below code

1.intialization
for(;;)
{
    if(2.condition)
    {

    }
    else {
        3.break;

    }
    4.updation;
}
// we can write for loop for loop without anything and it will not fetch error also
for(; ;)
{
    //block of code
}
//we can do multiple intialization ,codnition and updation
for(i=0,j=1;i<n && j<n; i--,j--)
{

}

//
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        cout << i << endl;
    }

    for (int k = 1, j = 2; k <= n && j <= n; k++, j--)
    {
        cout << k << " " << j << endl;
    }
}