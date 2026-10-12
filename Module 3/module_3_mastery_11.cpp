/*
    This code answers module 3 mastery question 10
*/

#include <iostream>
using namespace std;

int main(){

    char value;
    int num_changes = 0;


    do{
        cin >> value;
        if(value >= 'A' && value <= 'Z'){
            value += 32;
            num_changes += 1;
        }
        else if(value >= 'a' && value <= 'z'){
            value -= 32;
            num_changes += 1;
        }


    }while(value != '.');
    
    cout << "The number of chagnes made is: " << num_changes;

    return 0;
}