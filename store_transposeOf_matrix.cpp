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

    int t[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            t[j][i] = arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << t[i][j];
        }
        cout << endl;
    }
}