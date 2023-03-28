#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number : ";
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Given number is Even";
    }
    else
    {
        cout << "Given number is Odd";
    }
}