/*
    This program displays all printable characters,
    inclduing the extended character set, if one exists.
*/

#include <iostream>
using namespace std;

int main(){

    unsigned char ch;

    ch = 32;
    while(ch){
        cout << ch << " ";
        ch++;
    }
    return 0;
}