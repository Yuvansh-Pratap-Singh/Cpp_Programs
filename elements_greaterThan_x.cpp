#include <iostream>
using namespace std;
int main()
{
    int n, e, x;
    cout << "Enter number of elements : ";
    cin >> n;
    float arr[n];

    cout << "Enter the values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the value which want to compare : ";
    cin >> x;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (x < arr[i])
        {
            count++;
        }
    }

    cout << "Number of elements greater than " << x << " in an array is : " << count;
}
