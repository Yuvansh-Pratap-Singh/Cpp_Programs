#include <iostream>
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

    cout << "Enter the element you want to search : ";
    cin >> e;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (e == arr[i])
        {
            flag = true;
            break;
        }
    }

    if (flag == true)
    {
        cout << "Element found !! ";
    }
    else
    {
        cout << "Element not found !! ";
    }
}
