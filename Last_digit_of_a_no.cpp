#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //any remainder of any number when divided by 10 gives its last digit, but for negative numbers it will give us
    //-(last digit) . But we are just interested in the digit 
    //so we will make use of abs() function
    int num1;
    cout<<"Enter a number: ";
    cin>>num1;
    int last_digit = (abs(num1) % 10);
    cout<<"The last digit of your number is: "<<last_digit<<"\n";
    
    //You should also know about a funtion pow() which is used to find the nth power of a number (as C++ don't 
    //have any exponential operator) 
    //Note: To use this function you should include the header file first

    cout<<pow(2,-1); // it is equivalent to 2^(3)
                     //It accepcts negative power, fraction power(floating point number),etc.
    return 0;
}