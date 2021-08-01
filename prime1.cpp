
// checking a number is prime using boolean or binary number
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }

    if (n <= 1)
    {
        flag = false;
    }
    if (flag)
    {
        cout << "prime" << endl;
    }
    else
    {
        cout << "not a prime" << endl;
    }
} */
// printing all the didgits of  positive decimal number from right to left

/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        int rem = n % 10;
        cout << rem << endl;
        n = n / 10;
    }
} */

// reverse a number
/* #include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << rev << endl;
} */

//prime number

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime" << endl;
    }
    return 0;
}