#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;
    cout << "Enter values : ";
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum : " << sum;
}
