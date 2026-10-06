//For both these type the definition of presicion is different from default format
//Here precision means the number of digits after the decimal point
//Here too the default precision is 6. And if the digits aren't sufficient trailing zeros are added

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    //FIXED : Here we always represent the number in the form of decimal point and we never use e-notation.
    double num1 = 1.23;
    double num2 = 1122456.453;
    
    cout<<fixed;
    cout<<num1<<"\n"; //1.230000
    cout<<num2<<"\n"; //1122456.453000

    cout<<setprecision(2);  //Commonly used in cp
    cout<<num1<<"\n"; //1.23
    cout<<num2<<"\n"; //1122456.45 (here rounding-off takes place)

    double num3 = 1.27e7;
    cout<<num3<<"\n"; //12700000.00 (As it doesn't make use of e, it will convert the number in this way, no matter
                      //             how long it is.)
    
    //we can also use a flag defaultfloat to convert everything back to default format
    cout<<defaultfloat;
    

    //SCIENTIFIC : Here every number is represented using e-notation. Only one digit is displayed 
    //             before decimal point 
    cout<<scientific;
    cout<<setprecision(6); //Because we changed it before to 2
    cout<<num1<<"\n"; //1.230000e+000
    cout<<num2<<"\n"; //1.122456e+006

    cout<<setprecision(2);
    cout<<num1<<"\n"; //1.23e+000
    cout<<num2<<"\n"; //1.12e+006 (here again rounding-off takes place)

    cout<<num3; //1.27e+007 (the number got printed as it is)  
    
    return 0;
}

