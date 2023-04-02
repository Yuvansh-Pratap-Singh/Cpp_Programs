#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char op;
    cout << "Enter values with operator : ";
    cin >> a >> op >> b;
    switch (op)
    {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << a / b;
        break;

    default:
        cout << "Please enter valid expression !! (For Example --> a+b) ";
        break;
    }
}
