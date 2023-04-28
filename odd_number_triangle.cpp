#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter no. of rows : ";
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << a << " ";
            a += 2;
        }
        cout << endl;
    }
}