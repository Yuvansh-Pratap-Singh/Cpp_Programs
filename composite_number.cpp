#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = 1;
    cout << "Enter a number : ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (n == 1)
    {
        cout << n << " is neither prime nor composite" << endl;
    }

    else if (flag == 1)
    {
        cout << n << " is prime number" << endl;
    }
    else
    {
        cout << n << " is a composite number" << endl;
    }
}