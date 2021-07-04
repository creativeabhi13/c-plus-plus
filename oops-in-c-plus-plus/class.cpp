/*
class- a class is a user defined data type and also blue print of an object.
       it is user defined data type.it is building block of oops .

when we try to access acess variable inside the class.we cannot acess because in oops of c++ class is by default as private aceess specifier.
access specifier are three

1.private-it cannot acess outside of the class..hiddden
2.public-it can acess outside .
3. protected-it is lies between private and public.

*/
#include <iostream>
using namespace std;
// class declaration
class employee
{
    // here class is bydefault private so we can't access the variable inside so we will use public class
public:
    string Name; /// member of the class -it may be attributes /characteristics / behaviour
    string company;
    int age;
    int mobilenumber;
    void employeedetails()
    {
        cout << "Name" << Name << endl;
        cout << "company" << company << endl;
        cout << "age" << age << endl;
        cout << "mobile number" << mobilenumber << endl;
    }
};
int main()
{
    employee employee1;                //declaration of object using class...
    employee1.Name = "abhishek kumar"; // here employee1 is an object ...
    employee1.company = "creativeabhi13";
    employee1.age = 21;
    employee1.mobilenumber = 89;
    employee1.employeedetails();
    employee employee2;
    employee2.Name = "ashwani kumar";
    employee2.company = "creativeabhi13";
    employee1.age = 17;
    employee2.mobilenumber = 78;
    employee2.employeedetails();
}