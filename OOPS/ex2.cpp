/*

Nesting of member function
*/

#include <iostream>
#include <string>
using namespace std;
class binary
{
    // private
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Display Your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i) << endl;
    }
}

int main()
{
    // OOPS - CLASSES AND OBJECTS.
    // C++ --> intially called --> c with classes by stroustroup
    // class -->extension of structures (in C)
    // Structures had limitations -->
    // --> members are public
    // --> No Methods
    // classes = structures + more
    // classes --> can have methods and properties
    // Classes --> can make few members as private & public
    // structure in C++ are typedef
    // you can declare objects along with the class declaration like this :
    /* class Employee {
      // class definition
    }
    harry, rohan, lovish; */
    // harry.sal=8 makes no sense if sal is private
    // Nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones();
    b.display();
}