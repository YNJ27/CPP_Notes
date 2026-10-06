//These are of two types 1)binary - requires / operates on two operands 
//                       2)unary - operates on single operand

#include <iostream>
using namespace std;

int main()
{   
    //BINARY OPERATORS
    int a = 10;
    int b = 3;
    
    int z = a + b ;
    int y = a % b ; // % - it gives the remainder, when a is divided by b
    int x = a*b ;
    double p = static_cast<double>(a)/b ; //Though before , if not used static cast the answer will be 3(int)

    cout<<z<<" "<<y<<" "<<x<<" "<<p<<"\n";
    
    //(1)The + , - , * and / operators can be used with both integer datatypes(int, long, long long) and the floating
    //   point datatypes(float, double, long double)
    //   But the % operator can only be used with integers

    //(2)The sign of the result from % operator depends on the numerator (& in python it depends on the denominator). 
    //   The results in c++ are mathematically correct, but that in python they may not be correct.

    int a1 = 6;
    int b1 = -4;
    
    int a2 = -6;
    int b2 = 4;

    cout<<(a1 % b1)<<" "<<(a2 % b2)<<"\n";

    //(3.A)-if you carry out the following operations using integers and if b (denominator) is 0, then compiler may 
    //      behave in an undefined manner.
    //      (1)a/b and (2)a%b

    //(3.B)-If you carried out the operation a/b using floating point numbers and 
    //      (1) if b is 0 and a is (+ve) - you will get a number which is infinity as "inf"
    cout<<(3.0/0.0)<<"\n"; //inf

    //      (2) if b is 0 and a is (-ve) - you will get a number which is minus infinity as "-inf"
    cout<<(-3.0/0.0)<<"\n"; //-inf



    //UNARY OPERATORS (ALSO CALLED AS INCREMENT OR DECREMENT OPERATORS)
    //(1)post: ++ and --
    //(2)pre:  ++ and --

    int l = 10;
    int m = l++; //first (m = l) , then (l = l + 1)
    int n = ++l; //first (l = l + 1) , then n = l

    cout<<l<<"\n"<<m<<"\n"<<n;

    //The decrement operators works in the same way as their respective increment operators
    return 0;
}