#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter an integer : ";
    cin >> a;
    if (a>0)
    {
        cout << "Absolute value is : "<<a;
    }
    else
    {
        cout << "Absolute value is : "<<-a;
    }
}