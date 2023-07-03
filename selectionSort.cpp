#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {4, 5, 3, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i], arr[mindx]);
    }
    for (int ele : arr)
    {
        cout << ele << " ";
    }
}