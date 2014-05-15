// this file illustrates a templatized implementation of calculating the factorial of an integer

template <int N>
struct FactorialCalculator
{
    // since enums are determined at compile time, they are used to perform computations in metaprogramming
    enum { factorial = N * FactorialCalculator<N-1>::factorial };
};

template <>
struct FactorialCalculator<0>
{
    enum { factorial = 1 };
};
