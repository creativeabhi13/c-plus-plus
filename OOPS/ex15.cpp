// Constructor with default arguments
#include <iostream>
using namespace std;

class Simple
{
    int data1, data2;

public:
    Simple(int a, int b = 9) // Default arguments
    {
        data1 = a;
        data2 = b;
    }
    void printData();
    /* {
        cout << "The data is " << data1 << " and " << data2 << endl;
    } */
};
void Simple::printData()
{
    cout << "The data1 and data2 are " << data1 << " and " << data2 << endl;
}
int main()
{
    Simple s = Simple(1, 4);
    s.printData();
    // Default aargument
    Simple s1 = Simple(4);
    s1.printData();
}