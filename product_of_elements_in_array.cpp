#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int pdt = 1;
    for (int i = 0; i < 5; i++)
    {
        pdt = pdt * arr[i];
    }
    cout << pdt;
    return 0;
}