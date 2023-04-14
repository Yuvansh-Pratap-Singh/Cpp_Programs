#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter the sides of a triangle : ";
    cin >> a >> b >> c;

    if (a == b == c)
    {
        cout << "Equilateral Triangle";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "Isosceles Triangle.";
    }

    else
    {
        cout << "Scalene Triangle";
    }
}