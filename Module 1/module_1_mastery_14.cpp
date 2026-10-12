/*
    Converting Jovian years to Earth years from user input, allowing for fractional numbers
    1 jupiter year =~ 12 earth years
*/

#include <iostream>
using namespace std;

int main()
{
    double jupiter_years;
    double earth_years = 12;

    cout << "Enter the number of Jovian years you would like to convert to Earth years: ";
    cin >> jupiter_years;

    cout << jupiter_years << " Jupiter years is " << jupiter_years * earth_years << " Earth years";

    return 0;
}