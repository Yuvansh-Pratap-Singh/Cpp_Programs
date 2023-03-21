#include <iostream>
using namespace std;
int main()
{
    float radius, height, volume;
    cout << "Enter the radius of a cylinder : " << endl;
    cin >> radius;
    cout << "Enter the height of a cylinder : " << endl;
    cin >> height;
    volume = 3.1415 * radius * radius * height;
    cout << "The volume of a cylinder is : " << volume;
}