#include <iostream>
using namespace std;
int main()
{
    float degfaren;
    double degcel;
    cout << "Enter the temperature in farhenheit " << endl;
    cin >> degfaren;
    degcel = (degfaren - 32) * 5 / 9;

    cout << "The temperature in celcius is " << degcel << endl;
}