
#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float sal;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        sal = s;
    }

    void display()
    {
        cout << id << " " << name << " " << sal << endl;
    }
};

int main()
{
    Employee e1 = Employee(101, "Abhishek Kumar", 898764);
    Employee e2 = Employee(102, "Aditya Krishnan", 986857);

    e1.display();
    e2.display();
}