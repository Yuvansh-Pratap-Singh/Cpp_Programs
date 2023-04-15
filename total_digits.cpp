#include <iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout << "Enter number : ";
    cin >> n;
    int a = n;
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    if (a == 0)

        cout << "Total digit is : 1" << endl;

    else
        cout << "Total digits are : " << count << endl;
}