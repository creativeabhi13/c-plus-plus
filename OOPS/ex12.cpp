// Example on Constructor
#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    Point p(1, 2);
    Point p1 = Point(5, 10);
    p.displayPoint();
    p1.displayPoint();
}
