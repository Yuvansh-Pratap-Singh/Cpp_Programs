#include <iostream>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Enter 1st value : ";
    cin >> a;
    cout << "Enter 2nd value : ";
    cin >> b;
    cout << "Enter 3rd value : ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << a << " is greatest ";
    }
    if (b > a && b > c)
    {
        cout << b << " is greatest ";
    }
    else
    {
        cout << c << " is greatest ";
    }
}