// compilation : CC -o factorial_metaprogramming factorial_metaprogramming.cpp -I.
//
// this compilation unit demonstrates the templatized/metaprogramming implementation of computing the factorial of an integer

#include <factorial_metaprogramming.h>

#include <iostream>

int main(int argc, char** argv)
{
    using namespace std;

    
    // const int expressions need to be used since this is being computed at compile time
    cout << "5! = " << FactorialCalculator<5>::factorial << endl;
    
    return 0;
}
