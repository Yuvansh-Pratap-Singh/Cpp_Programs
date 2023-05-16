#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit)
{
    double celsius;

    celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
    return celsius;
}

int main()
{
    double fahrenheit;

    cout << "Enter temperature in fahrenheit (in degrees) : ";
    cin >> fahrenheit;
    cout << "Temperature in Celsius (in degrees) = " << fahrenheitToCelsius(fahrenheit) << endl;
}