// In this C++ code, the measurement update function returns two values: the newly computed mean and variance. 
// Usually, a tuple or struct should be used in C++ to return more than one value from a function and easily assign them later to multiple variables. 
// For more information on tuples and structs take a look at this link.(Searcg "Returning Multiple Values from Functions in C++" in google.)
// make_tuple() 튜플을 만드는 함수

#include <iostream>
#include <math.h>
#include <tuple>

using namespace std;

double new_mean, new_var;

tuple<double, double> measurement_update(double mean1, double var1, double mean2, double var2)
{
    new_mean = (var2 * mean1 + var1 * mean2) / (var1 + var2);
    new_var = 1 / (1 / var1 + 1 / var2);
    return make_tuple(new_mean, new_var);
}

int main()
{

    tie(new_mean, new_var) = measurement_update(10, 8, 13, 2);
    printf("[%f, %f]", new_mean, new_var);
    return 0;
}
