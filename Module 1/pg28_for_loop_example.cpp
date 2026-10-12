// A program that illustrates hte for loop.

#include <iostream>
using namespace std;

int main()
{
    int count;

    for(count=1; count <=100; count=count+1)
        cout << count << " ";
    
    return 0;
}

// you will almost never see count=count+1 in professionally written C++. C++ has an operation that increments the initliazation by one -> "++" i.e. count++
// C++ also provides a decrament operator -> "--" i.e. count--