/* increment -     we are going to increment the value
                pre increment = ++i =  - first increment the i value
                post increment = i++ = take value and then increment

decrement -     we are going to decrease the value
                pre decrement = --i =  - first decrement the i value
                post decrement = i-- = take value and then decrement

// pre increment
int i = 2;
int a = ++i;
a = 3
i = 3

// post increment
int i = 2;
int a = i++;
a = 2 i = 3

// pre decrement
int i = 2;
int a = --i;
a = 2
i = 2

 // post decrement
int i = 2;
int a = i--;
a = 2
 i = 1
 */

#include <iostream>
using namespace std;
int main()
{
    int a, i, b, j;
    cout << "Enter the value for increment" << endl;
    cin >> i >> j;

    // increment
    a = ++i;
    cout << "the value of a after preincrement is "
         << " " << a << " and i is " << i << endl;
    b = j++;
    cout << "the value of a after postincrement is "
         << " " << b << " and i is " << j << endl;

    int k, l, c, d;

    cout << "Enter the value for decrement " << endl;
    cin >> k >> l;
    // decremenet
    c = --k;
    cout << "the value of a after predecremenet is "
         << " " << c << " and i is " << k << endl;
    d = l--;
    cout << "the value of a after postdecremenet is "
         << " " << d << " and i is " << l << endl;
}
