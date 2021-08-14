/* A function is a block of code that performs a specific task.

Why are functions used ? x If some functionality is performed at multiple places in software, then rather than writing the same code, again and again, we create a function and call it everywhere.This helps reduce code redundancy.x Functions make maintenance of code easy as we have to change at one place if we make future changes to the functionality.x Functions make the code more readable and easy to understand.

                                                                                                                                                                                                                       The syntax for function declaration is -
                                                                                                                                                                                                                       return -type function_name(parameter 1, parameterϮ...... parameter n)
{

    //function_body */

//   example
/* #include <iostream>
using namespace std;
void print(int num)
{
    cout << num << endl;
}
int add(int num1, int num2)
{
    print(num1);
    print(num2);
    int sum = num1 + num2;
    cout << sum << endl;
    return sum;
}
int main()
{
    int a = 2;
    int b = 3;
    cout << add(a, b) << endl;
} */

/* #include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (isPrime(i))
        {
            cout << i << endl;
        }
    }

    return 0;
} */

// fibenacci series - the number which is the sum of the two previous number .
/* #include <iostream>
using namespace std;
void fab(int n)
{
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    for (int i = 1; i <= n; i++)
    {
        cout << t1 << endl;
        nextterm = t1 + t2;
        t1 = t2;
        t2 = nextterm;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fab(n);
    return 0;
}

 */

//a  factorial is a number which is multiply wih all its lesser number.
// 5!=5*4*3*3*2*1=120
/* #include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    cin >> n;
    int ans = fact(n);
    cout << ans << endl;
} */

// calculate ncr=n!/(n-r)!*r!

/* #include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    int r;
    cin >> n >> r;

    int ans = (fact(n)) / (fact(n - r) * r);
    cout << ans << endl;
    return 0;
} */

// pascal traingle
/* 1
1 2 1
1 3 3 1
1 4 6 4 1 */

#include <iostream>
using namespace std;
int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}
int main()
{
    int n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // icj=i!/J*(i-j)!
            cout << fact(i) / (fact(i - j) * fact(j)) << " " << endl;
        }
        cout << endl;
    }
    return 0;
}