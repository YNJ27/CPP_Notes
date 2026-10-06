//Note: to use different predefined functions for specific tasks , you have to first include their header files 
//      which inlude their declaration and definations

// example cmath - 1) pow() - to calculate nth order
//                 2) log10(x) - to calculate log of x to the base 10 
    
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout<<pow(2,-1)<<"\n"; // it is equivalent to 2^(3)
                     //It accepcts negative power, fraction power(floating point number),etc.
    cout<<log10(100);
}
    