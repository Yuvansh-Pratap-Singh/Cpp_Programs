#include <iostream>
using namespace std;
int main()
{
    float radius, pi = 3.1415, circumference;
    cout << "Enter the radius of a circle : " << endl;
    cin >> radius;
    circumference = 2 * pi * radius;
    cout << "The circumference of a circle is : " << circumference;
}