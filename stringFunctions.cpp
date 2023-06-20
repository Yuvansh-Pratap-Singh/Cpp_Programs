#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str = "Hello how are you";
    int size = str.size();
    int length = str.length();
    cout << size << endl;
    cout << length << endl;

    str.push_back('!');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    str = str + "!!!";
    cout << str << endl;

    cout << str.substr(0, 5) << endl; // str.substr(index,length)

    int x = 10;
    string s = to_string(x);
    cout << s << endl;

    reverse(str.begin(), str.end());
    cout << str << endl;
}