#include <iostream>
using namespace std;

extern int m; /*if you not use this line the program will give compiler error, 
                because m is declared and defined 
                after the function in which it is accessed*/
              //extern tells the compiler that there is a global variable m

int main()
{
    cout<<m;
    return 0;
}

int m = 25;