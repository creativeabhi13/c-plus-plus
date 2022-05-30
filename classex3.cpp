#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    string name;
    float sal;

    void insert(int i, string n, float s)
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
    Employee e1, e2, e3, e4, e5;
    e1.insert(101, "Abhishek Kumar", 256744.00);
    e2.insert(102, "Aditya Krishnan", 257684.00);
    e3.insert(103, "Harsh Soni", 777757.00);
    e4.insert(104, "Ajin Sumesh", 455565.00);
    e5.insert(105, "Omkar Deshpan", 543435.0);

    e1.display();
    e2.display();
    e3.display();
    e4.display();
    e5.display();
}