/*
    This program was created to answer the Module 2 question 14 from the C++ a begginers guide book

    The following code was my attempt. You can make the code faster by hard coding 2 as a prime then starting num at 3 and iterating by 2 to only get odd numbers,
    further you can have the divisor's for loop upper bound be the sqrt(num) because beyond that point factors would be repeated. i.e. 27's factors are 9*3 but
    you would check this factor twice with 3*9.
*/

#include <iostream>
using namespace std;

int main()
{
    bool is_prime = true;
    for(int num = 2; num <= 100; ++num){
            is_prime = true;

            for(int divisor = 2; divisor <= num/2; ++divisor){

                if(num % divisor == 0){
                    is_prime = false;
                }
            }

            if(is_prime == true){
                cout << num << " is a prime number!\n";
            }
    }
    return 0;
}