#include <iostream>
#include <cmath>
using namespace std;

//You can also declare the functions first above the main (i.e before calling it) and can define it later
//Whatever we did before was defination of function

int getMax(int x, int y); //Declaration . Note: Even there is no need of giving the name of the parameters

// you can also use:
// ' int getMax(int , int); '

int main()
{
    int a = 10, b = 20;
    cout<<getMax(a,b);

    return 0;
}

int getMax(int x , int y)  //Defination
{
    if (x > y)
    {
        return x;
    }

    else
    {
        return y;
    }
}

// 3 Types of errors:
// (1) - If you didn't declare the function and defined it after its call (in main fn)

// (2) - While declaraing you mentioned a single parameter (by mistake) , and while defining you made use of 2 or 
//       more parameters  

// (3) - If you declared the function and called it in main , but forgot to define it then linker error



//Note: to use different predefined functions for specific tasks , you have to first include their header files 
//      which inlude their declaration and definations

// example cmath - 1) pow() - to calculate nth order
//                 2) log10(x) - to calculate log of x to the base 10
