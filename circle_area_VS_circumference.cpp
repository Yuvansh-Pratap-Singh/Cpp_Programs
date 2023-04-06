#include <iostream>
using namespace std;
int main()
{
    float radius, pi = 3.1415, circumference, area;
    cout << "Enter the radius of a circle : ";
    cin >> radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    cout << "The circumference of a circle is : " << circumference << endl;
    cout << "The area of a circle is : " << area << endl;

    if (area > circumference)
    {
        cout << "Area is greater than the circumference of circle";
    }
    else
    {
        cout << "Circumference is greater than or equal to the area of circle";
    }
}