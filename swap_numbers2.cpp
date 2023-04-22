#include <iostream>
using namespace std;

void swap(float a, float b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swap  ==> a = " << a << " b = " << b;
}

int main()
{
    float a, b;
    cout << "Enter 1st value : ";
    cin >> a;
    cout << "Enter 2nd value : ";
    cin >> b;
    cout << "Before swap ==> a = " << a << " b = " << b << endl;
    swap(a, b);
}