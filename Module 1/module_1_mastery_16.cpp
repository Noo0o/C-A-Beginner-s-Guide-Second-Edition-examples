/*
    This program averages the absolute value of 5 user inputted values
*/

#include <iostream>
using namespace std;

int main()
{
    double running_sum;
    int input_value;

    cout << "Enter your five values to find the absolute value of their sum: \n";

    for(int i; i < 5; ++i){
        cin >> input_value;
        running_sum += abs(input_value);
    }

    cout << "The absolute value of your enter inputs is: " << running_sum;

    return 0;
}