#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x;
    cout << "Enter value : ";
    cin >> x;
    string s = to_string(x);
    cout << "Total digits are : " << s.length() << endl;
}
