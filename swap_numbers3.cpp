#include <iostream>
using namespace std;

void swap(float *x, float *y)
{
    float temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    float a, b;
    cout << "Enter 1st value : ";
    cin >> a;
    cout << "Enter 2nd value : ";
    cin >> b;
    cout << "Before swap ==> a = " << a << " b = " << b << endl;
    swap(&a, &b);
    cout << "After swap  ==> a = " << a << " b = " << b << endl;
}