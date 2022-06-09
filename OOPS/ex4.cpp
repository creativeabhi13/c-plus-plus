// How to create array of an object
#include <iostream>
using namespace std;

class Employee
{
    int id;
    int sal;

public:
    void setId(void)
    {
        cout << "Enter the id of the Employee" << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this Employee is " << id << endl;
    }
};
int main()
{
    /*  Employee Ajin, Harsh, Aditya, Vinay;
     Ajin.setId();
     Harsh.setId();
     Aditya.setId();
     Vinay.setId();
     Ajin.getId();
     Harsh.getId();
     Aditya.getId();
     Vinay.getId();
 */
    int n;

    cout << "Enter the number id you want to Insert" << endl;
    cin >> n;
    Employee fb[n];
    for (int i = 0; i < n; i++)
    {
        fb[i].setId();
    }

    for (int i = 0; i < n; i++)
    {

        fb[i].getId();
    }
}
