// compilation : CC -o factorial_recursive factorial_recursive.cpp
//
// this file demonstrates the recursive implementation of computing the factorial of an integer 

#include <iostream>
#include <string>
#include <stdlib.h>

int factorial(int n);

int main(int argc, char** argv)
{
    using namespace std;
    
    if (argc != 2 )
    {
        cerr << "Usage : factorial_recursive <integer>" << endl;
        return -1;
    }


    int factToCalc = atoi(argv[1]);


    cout << factToCalc << "! = " << factorial(factToCalc) << endl;
    
    return 0;
}

int factorial(int n)
{
    if (n < 0)
        return -1;

    if (n == 0 || n == 1)
        return 1;

    return n * factorial(n-1);
}
