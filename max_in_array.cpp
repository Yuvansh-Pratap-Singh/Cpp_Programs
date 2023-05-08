#include <iostream>
using namespace std;
int main()
{
    int n, e;
    cout << "Enter number of elements : ";
    cin >> n;
    float arr[n];

    cout << "Enter the values : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    float max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "Max value is : " << max;
}
