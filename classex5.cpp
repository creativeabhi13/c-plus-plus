#include <iostream>
using namespace std;
class Employee
{
public:
    int i;
    string n;
    float s;
    Employee(int i, string n, float s)
    {
        this->i = i;
        this->n = n;
        this->s = s;
    }

    void display()

    {
        cout << i << " " << n << " " << s << endl;
    }
};
int main()
{
    Employee e1 = Employee(201, "raju", 56789);
    e1.display();
    return 99;
}