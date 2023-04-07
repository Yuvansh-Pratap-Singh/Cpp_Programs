#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "Enter day number (1-7) : ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "SUNDAY\n";
        break;
    case 2:
        cout << "MONDAY\n";
        break;
    case 3:
        cout << "TUESDAY\n";
        break;
    case 4:
        cout << "WEDNESDAY\n";
        break;
    case 5:
        cout << "THURSDAY\n";
        break;
    case 6:
        cout << "FRIDAY\n";
        break;
    case 7:
        cout << "SATURDAY\n";
        break;

    default:
        cout << "Invalid Number !!";
        break;
    }
}