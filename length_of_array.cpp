#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 45, 55, 64, 90, 85, 70, 45};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "Length : " << length;
}