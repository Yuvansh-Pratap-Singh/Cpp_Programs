#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter the no. of rows : ";
    cin >> m;
    cout << "Enter the no. of columns : ";
    cin >> n;

    int arr[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    int msum = INT_MIN;
    int row = -1;
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
            if (sum > msum)
            {
                msum = sum;
                row = i;
            }
        }
    }
    cout << "The row with maximum sum is : " << row + 1;
}