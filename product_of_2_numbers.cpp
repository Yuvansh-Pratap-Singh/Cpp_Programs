#include <iostream>
using namespace std;
int main()
{
    float a, b;
    cout << "Enter values : ";
    cin >> a >> b;
    float *p1, *p2;
    p1 = &a;
    p2 = &b;

    cout << "Product is " << (*p1) * (*p2);
}
