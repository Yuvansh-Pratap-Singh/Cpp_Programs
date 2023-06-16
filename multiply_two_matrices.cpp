#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cout << "Enter rows of 1st matrix : ";
    cin >> m;
    cout << "Enter column of 1st matrix : ";
    cin >> n;

    int p, q;
    cout << "Enter rows of 2nd matrix : ";
    cin >> p;
    cout << "Enter column of 2nd matrix : ";
    cin >> q;

    if (n == p)
    {
        int arr1[m][n];
        cout << "Enter elements of 1st matrix : ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr1[i][j];
            }
            cout << endl;
        }
        int arr2[p][q];
        cout << "Enter elements of 2nd matrix : ";
        for (int i = 0; i < p; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cin >> arr2[i][j];
            }
            cout << endl;
        }
        // Resultant matrix
        int res[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                res[i][j] = 0;
                for (int k = 0; k < p; k++)
                {
                    res[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
            cout << endl;
        }

        // Printing
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "The matrices cannot be multiplied";
    }
}