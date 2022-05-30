#include <iostream>
#include <stdlib.h>
using namespace std;
// class Declaration
class Student
{
private:
    int mobnum;
    int Fee;

public:
    string name;
    string address;
    int rollnumber;
    void setData(int mn, int f);
    void getData()
    {
        cout << "My Name is :" << name << endl;
        cout << "My Rollnumber is :" << rollnumber << endl;
        cout << "My address is :" << address << endl;
        cout << "My Mobile number is :" << mobnum << endl;
        cout << "My school fee in inr is :" << Fee << endl;
    }
};
void Student ::setData(int mn, int f)
{
    mobnum = mn;
    Fee = f;
}
int main()
{
    Student s1;
    s1.name = "Abhishek Kumar";
    s1.address = "New Delhi";
    s1.rollnumber = 001;
    s1.setData(800586848, 560000);
    s1.getData();
}