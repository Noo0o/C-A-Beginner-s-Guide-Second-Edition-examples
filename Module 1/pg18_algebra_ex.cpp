// Using an operator.

#include <iostream>
using namespace std;

int main()
{
    int length; // this declares a variable
    int width; // this declares another variable
    int area; // this declares another variable

    length = 7; // this assigns 7 to length
    width = 5; // this assigns 5 to width

    area = length * width;

    cout << "The area is: ";
    cout << area; // this displays 35

    return 0;
}

/*
Area is not needed in this program. area can be computed in the last cout statement by doing:
cout << length * width;


Further, you can decalre more than one variable in one statement. i.e.:
int length, width, area;
*/