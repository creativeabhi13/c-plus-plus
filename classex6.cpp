#include <iostream>
using namespace std;
class Account
{
public:
    int num;
    string name;
    static float rate;

    Account(int num, string name)
    {
        this->num = num;
        this->name = name;
    }
    void display()
    {
        cout << num << " " << name << " " << rate << endl;
    }
};
float Account ::rate = 6.50;
int main()
{

    Account a1 = Account(102, "abhishek");
    Account a2 = Account(203, "aditya");

    a1.display();
    a2.display();
}