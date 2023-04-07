#include <iostream>
using namespace std;
int main()
{
    float length, breadth, perimeter, area;
    cout << "Enter the length and breadth of a rectangle : ";
    cin >> length >> breadth;
    perimeter = 2 * (length * breadth);
    area = length * breadth;
    cout << "The perimeter of a rectangle is : " << perimeter << endl;
    cout << "The area of a rectangle is : " << area << endl;

    if (area > perimeter)
    {
        cout << "Area is greater than perimeter";
    }

    else
    {
        cout << "Perimeter is greater than area";
    }
}