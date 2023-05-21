#include <iostream>
using namespace std;
int main()
{
    int table;
    cout << "Enter the number whose table you want : ";
    cin >> table;
    int i = 1;
    while (i <= 10)
    {
        cout << table << " X " << i << " = " << table * i << endl;
        i++;
    }
}