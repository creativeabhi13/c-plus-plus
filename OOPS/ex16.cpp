// Runtime intialization of object using Consturctor
// dynamically -runtime
#include <iostream>
using namespace std;

class BankDeposit
{

    int principal;
    int years;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}                    // Default Constructor
    BankDeposit(int p, int y, float r); // r can be value like 0.04
    BankDeposit(int p, int y, int r);   // r can be value like 4
    void show();
};
BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}
BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

void BankDeposit ::show()
{
    cout << "Principal amount was " << principal
         << ".Return Value after " << years << " is "
         << returnValue << endl;
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "Enter the Value of p y and r " << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposit(p, y, r);
    bd1.show();
    cout << "Enter the Value of p y and R " << endl;
    cin >> p >> y >> R;
    bd2 = BankDeposit(p, y, R);
    bd2.show();
}