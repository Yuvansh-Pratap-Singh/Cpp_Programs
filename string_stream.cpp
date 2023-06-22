#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string str = "Hello how are you ?";
    stringstream ss(str);
    string temp;
    while (ss >> temp)
    {
        cout << temp << endl;
    }
}