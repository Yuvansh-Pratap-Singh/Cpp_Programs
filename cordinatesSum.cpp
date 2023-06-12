#include <iostream>
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
    int l1, r1, l2, r2;
    cout << "Enter cordinates : ";
    cin >> l1 >> r1 >> l2 >> r2;

    int sum = 0;

    for (int i = min(l1, l2); i <= max(l1, l2); i++)
    {
        for (int j = min(r1, r2); j <= max(r1, r2); j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "Sum = " << sum;
}