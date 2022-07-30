#include <iostream>
using namespace std;
int main()
{
    int number;
    int sum = 0;
    int count = 1;
    cout << "Enter the number " << endl;
    cin >> number;
    while (count <= number)
    {
        cout << "Sum of the number of  " << count << " " << sum << endl;
        sum += count;
        count = count + 1;
    }
    cout << "Sum of the number is " << sum << endl;
}