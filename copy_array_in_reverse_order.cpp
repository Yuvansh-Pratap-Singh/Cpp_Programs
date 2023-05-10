#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> v1;
    int n;
    cout << "Enter array size : ";
    cin >> n;
    cout << "Enter the all values : ";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v1.push_back(x);
    }

    display(v1);

    vector<int> v2(v1.size());

    for (int j = 0; j < v1.size(); j++)
    {
        v2[j] = v1[v1.size() - 1 - j];
    }

    display(v2);

    return 0;
}