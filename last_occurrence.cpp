#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    int elements;
    cout << "Enter number of elements : ";
    cin >> elements;
    cout << "Enter number the all values : ";
    for (int i = 0; i < elements; i++)
    {
        float x;
        cin >> x;
        v.push_back(x);
    }
    float val;
    cout << "Enter the value which you want to find : ";
    cin >> val;

    int index = -1;

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == val)
        {
            index = i;
            break;
        }
    }
    cout << "Last occurrence index : " << index;
}