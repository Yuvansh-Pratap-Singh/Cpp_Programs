#include <iostream>
using namespace std;
int main()
{
    int arr[6] = {7, 4, 6, 2, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Not optimized !!!-----------------

    // for (int i = 0; i < n - 1; i++) // n-1 passes
    // {
    //     for (int j = 0; j < n - 1; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // Optimized ------------------------

    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // More Optimized --------------------

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = false;
            }
        }
        if (flag == true)
        {
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}