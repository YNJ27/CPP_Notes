//here including the header file manip is important
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    //NOTE: All these manipulations are applicable for all float, double, long double.

    //Note: once the flags are applied, they work for the complete program untill altered
    //(1) setprecision(n) - you can change the default precision to any other number

    //(1) showpoint - displays trailing zeros (in the presicion range) though you wrote by yourself or not
    //                Use noshowpoint to remove the effect

    //(1) showpos - same as that of IO Manipulation

    //(1) uppercase - will display E instead of small e

    double num1 = 2.4476389;
    double num2 = 1.234;
    double num3 = 24476382.47;
    cout<<setprecision(7)<<num1<<"\n"; //2.447639
    cout<<showpoint<<num2<<"\n";
    cout<<showpos<<num2<<"\n";
    cout<<uppercase<<num3;
     
    return 0;
}