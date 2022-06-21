/*

Create a function which take 2 point objects and compute the distance between those two points.
*/
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
    int a, b;
    float c;

public:
    Point(int x, int y);
    void displayPoint()
    {
        cout << "The point is (" << a << "," << b << ")" << endl;
    }

    void distanceBetween(Point m1, Point m2)
    {

        c = sqrt(pow(m1.a - m2.a, 2) + pow(m1.b - m2.b, 2));
        cout << "the distance between two point is " << c << endl;
    }
    /* void distanceDisplay()
    {
        cout << "the distance between the point(" << a << ","<<b<<")"<< "and" << "("<<
    } */
};
Point ::Point(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    Point p1 = Point(5, 6);
    Point p2 = Point(10, 20);
    p1.displayPoint();
    p2.displayPoint();
    p1.distanceBetween(p1, p2);
}