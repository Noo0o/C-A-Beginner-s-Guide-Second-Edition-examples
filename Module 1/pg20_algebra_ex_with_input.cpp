/*
    An interactive program that computes
    the area of a rectangle.
*/

#include <iostream>
using namespace std;

int main()
{
    int length, width; // this declares variables length and width

    cout << "Enter the length: ";
    cin >> length; // input the length

    cout << "Enter the width: ";
    cin >> width;

    cout << "The area is: ";
    cout << width * length; //display the area

    return 0;
}
