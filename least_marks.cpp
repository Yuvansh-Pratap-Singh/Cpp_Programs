#include <iostream>
using namespace std;
int main()
{
    float marks1, marks2, marks3;
    cout << "Enter 1st student marks : ";
    cin >> marks1;
    cout << "Enter 2nd student marks : ";
    cin >> marks2;
    cout << "Enter 3rd student marks : ";
    cin >> marks3;
    if (marks1 < marks2 && marks1 < marks3)
    {
        cout << " 1st Student has least marks ";
    }
    else if (marks2 < marks1 && marks2 < marks3)
    {
        cout << " 2nd Student has least marks ";
    }
    else if (marks3 < marks1 && marks3 < marks2)
    {
        cout << " 3rd Student has least marks ";
    }
    else
    {
        cout << " !!! ";
    }
}
