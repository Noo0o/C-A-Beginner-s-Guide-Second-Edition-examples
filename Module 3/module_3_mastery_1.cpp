/*
    Program that answers question 1 of the Module 3 Mastery Check
*/

#include <iostream>
using namespace std;

int main(){

    char entered_value;
    int period_count = 0;

    cout << "Enter your characters. Periods will be counted. type '$' to quit!: \n\n";

    do{
        cin >> entered_value;
        if(entered_value == '.') period_count++;

    } while(entered_value != '$');

    cout << "The number if '.' is: " << period_count;

    return 0;
}