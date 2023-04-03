#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Print Odd numbers upto : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            continue;
        cout << i << endl;
    }
}