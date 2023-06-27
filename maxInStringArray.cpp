#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string arr[] = {"1234", "2547", "5468", "4569", "5698"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for (int i = 1; i <= 4; i++)
    {
        int x = stoi(arr[i]);
        if (x > max)
        {
            max = x;
            maxS = arr[i];
        }
    }
    cout << maxS;
}