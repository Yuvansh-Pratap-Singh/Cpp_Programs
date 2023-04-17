#include <iostream>
using namespace std;
int main()
{
    int n;
    int lastDigit = 0;
    int reverse = 0;
    cout << "Enter number :";
    cin >> n;
    while (n > 0)
    {
        reverse *= 10;
        lastDigit = n % 10;
        reverse += lastDigit;
        n /= 10;
    }
    cout << reverse;
}