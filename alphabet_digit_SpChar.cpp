#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any character : ";
    cin >> ch;
    // Alphabet checking condition
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        cout << ch << " is an Alphabet";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << ch << " is a Digit";
    }
    else
    {
        cout << ch << " is a Special Character";
    }
    return 0;
}