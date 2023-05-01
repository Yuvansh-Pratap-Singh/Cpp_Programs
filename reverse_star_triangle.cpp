#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter no. of rows : ";
    cin >> row;

    // First Method ------------>

    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= row + 1 - i; j++)
    //     {
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Second Method ------------>

    for (int i = 0; i < row; i++)
    {
        for (int j = i; j < row; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}