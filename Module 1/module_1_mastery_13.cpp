/*
    This program was created to answer question 13 in the Module 1 Mastery Check of CPP A Beginners Guide
*/

#include <iostream>
using namespace std;


int main()
{
    double moon_weight;
    int space_count = 1;

    for(double count=1.0; count <= 100.0; count++){
        moon_weight = count * 0.17;
        cout << count << " is " << moon_weight << "lbs on the moon!\n";
        space_count++;

        if(space_count%25 == 0){
            cout << "\n";
        }
    }
    return 0;
}