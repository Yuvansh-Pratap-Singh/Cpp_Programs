#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
        else
            sum -= i;
    }

    cout << "Total : " << sum << endl;
}