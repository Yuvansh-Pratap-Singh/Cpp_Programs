#include <iostream>
#include <climits>
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

    float max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    float smax = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != max && smax < arr[i])
        {
            smax = arr[i];
        }
    }

    cout << "Second largest value is : " << smax;
}
