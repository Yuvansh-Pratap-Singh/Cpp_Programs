#include <iostream>
using namespace std;
int main()
{
    int n;
    // It must be odd
    cout << "Enter the no. of rows/column : "; 
    cin >> n;

    int arr[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == n / 2 || j == n / 2)
            {
                cout << arr[i][j] << " ";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}