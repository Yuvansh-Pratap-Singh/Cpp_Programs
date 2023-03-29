#include <iostream>
using namespace std;
int main()
{
    float cp;
    float sp;
    cout << "Enter cost price : ";
    cin >> cp;
    cout << "Enter selling price : ";
    cin >> sp;
    if (cp <= sp)
    {
        cout << "Profit : " << sp - cp;
    }
    else 
    {
        cout << "Loss : " << cp - sp;
    }
   
}