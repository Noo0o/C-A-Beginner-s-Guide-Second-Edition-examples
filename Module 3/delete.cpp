


#include <iostream>
using namespace std;

int main(){

    char value;
    int change_count = 0;

    cin >> value;

    while(value != '.'){
        if(value > 64 && value < 91){
            value += 32;
            change_count += 1;
        }
        else if(value > 96 && value < 123){
            value -= 32;
            change_count += 1;
        }
        cin >> value;
    }

    cout << "Total changes: " << change_count;
    return 0;
}

