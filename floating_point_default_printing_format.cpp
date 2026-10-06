#include <iostream>
using namespace std;

int main()
{
    //NOTE: All these rules are applicable for all float, double, long double.

    //1)No trailing zeros after the decimal point
    double a = 1.2300;
    cout<<a<<"\n";          //1.23

    //2)Default precision is 6. Precision includes the numbers before and after the decimal point, (excluding the 
    //  the numbers after e)
    //(A)-Ex: It will round off the number to meet the precision
    double num1 = 1.234567;
    cout<<num1<<"\n";       //1.23457

    //(B)-When the number of digits before decimal point itself are greater than 6.
    //    Then the number will be displayed in the form of e.
    double num2 = 1234567.67;
    cout<<num2<<"\n";        //1.23457e+006

    //(C) -When the number of digits before decimal point itself are equal 6.
    //     Then the number will be round off and will be displayed in the form of an integer
    double num3 = 123456.67;
    cout<<num3<<"\n";       //123457

    //(3) If the number written by you in the form of e , but can be accomodated in the precision will be displayed 
    //    in the form of integer
    double num4 = 123e+2;
    cout<<num4;           //12300

    return 0;
}