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
#include <iostream>
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