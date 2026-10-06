#include <iostream>
#define add(x,y) x + y  
using namespace std;

inline int getmax(int x, int y)
{
    return ((x > y)? x : y) ; //Terneray operator - similar to if - else
                              // (condition)? v1 : v2 
                              // If the condition is true , v1 is returned, else v2 is returned

}

//Inline function when used , the complete process of function call is avoided and the code inside that function 
//is copied at the calling place

//Inline function is just a suggestion to the compiler , which it may or may not accept

//Using too much inline function is not good as it increases the original code size
//While general fuction doesn't do that as their code is not copied in the original code 

inline int add1(int x , int y)
{
    return x + y ;
}

int main()
{
    cout<<getmax(10,20)<<"\n"; 

    cout<<4 * add(10,20)<<"\n"; //macro - o/p = 60
    cout<<4* add1(10,20)<<"\n"; //inline fn - o/p = 120

    //The output of macro is wrong, while that of inline fn is correct. This is because macro just carry out 
    //blind substitution 
    //But inline function works same as that of a normal fn. So they are better than macros 
    //The answer of macro will become right when you make use of brackets 
    return 0 ;

}