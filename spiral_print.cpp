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

    int minr = 0;
    int maxr = m - 1;
    int minc = 0;
    int maxc = n - 1;

    int tne = m * n; // total number of elements
    int count = 0;

    while (minr <= maxr && minc <= maxc)
    {

        // Right
        for (int i = minc; i <= maxc && count < tne; i++)
        {
            cout << arr[minr][i] << " ";
            count++;
        }
        minr++;

        // Down
        for (int j = minr; j <= maxr && count < tne; j++)
        {
            cout << arr[j][maxc] << " ";
            count++;
        }
        maxc--;

        // Left
        for (int k = maxc; k >= minc && count < tne; k--)
        {
            cout << arr[maxr][k] << " ";
            count++;
        }
        maxr--;

        // Up
        for (int l = maxr; l >= minr && count < tne; l--)
        {
            cout << arr[l][minc] << " ";
            count++;
        }
        minc++;
    }
}
