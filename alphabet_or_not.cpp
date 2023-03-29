#include <iostream>
using namespace std;
int main()
{
    char input;
    cout << "Enter the character : ";
    cin >> input;
    int ch = int(input);

    if (ch >= 65 && ch <= 90)
    {
        cout << "The character is uppercase alphabet ";
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "The character is lowercase alphabet ";
    }

    else
    {
        cout << "Given value is not an alphabet ";
    }
}