#include <iostream>
using namespace std;
int main()
{
    float marks;
    cout << "Enter marks : ";
    cin >> marks;
    if (marks >= 91 && marks <= 100)
    {
        cout << "Grade : A (Outstanding)";
    }
    else if (marks >= 81 && marks <= 90)
    {
        cout << "Grade : A- (Excellent)";
    }
    else if (marks >= 71 && marks <= 80)
    {
        cout << "Grade : B (Very Good)";
    }
    else if (marks >= 61 && marks <= 70)
    {
        cout << "Grade : B- (Good)";
    }
    else if (marks >= 51 && marks <= 60)
    {
        cout << "Grade : C (Average)";
    }
    else if (marks >= 41 && marks <= 50)
    {
        cout << "Grade : D (Below Average)";
    }
    else if (marks >= 33 && marks <= 40)
    {
        cout << "Grade : E (Just Pass)";
    }
    else
    {
        cout << "Grade : F (Fail)";
    }
}
