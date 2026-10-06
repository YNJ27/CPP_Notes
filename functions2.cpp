//Note: An advantage of using functions is that it can avoid variable name collisions
//      If you writing a single piece of code without any functions , you can't use the same variable name
//      So you have to think of distinct variable names

//      But if you are using functions you can make use of same variable names for the local variables , parameters
//       of two different functions

//EX:

#include <iostream>
using namespace std;

int add(int p , int q) 
{
    int result = (p + q);
    
    return result;
}

int sub(int p, int q) //See we used p , q and result in both the functions 
{
    int result = (p - q);

    return result;
}

int main()
{
    int a = 10 , b = 20;
    cout<<add(a,b)<<"\n";
    cout<<sub(a,b);
    return 0;
}