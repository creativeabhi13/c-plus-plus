#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    string name;
    void insert(int i, string n)
    {
        id = i;
        name = n;
    }

    void display()
    {
        cout << id << " " << name << endl;
    }
};
int main()
{
    Student s1, s2, s3, s4;
    s1.insert(001, "Abhishek Kumar");
    s2.insert(002, "Aditya Krishan");
    s3.insert(003, "Harsh Soni");
    s4.insert(004, "Ajin Sumesh");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
}
