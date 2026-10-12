/*
    Use hte Pythagorean theorm to find
    the length of the hypotenuse given
    the legnths of the two opposing sides.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y, z;

    cout << "Enter x value: \n";
    cin >> x;
    cout << "Enter y value: \n";
    cin >> y;

    z = sqrt(x*x + y*y);

    cout << "Hypotenuse is " << z;
    
    return 0;
}