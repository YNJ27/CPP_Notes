#include <iostream>
using namespace std;

int main()
{
    double x = 2.5;
    int y = x; // Output: 2
    bool z = y; //output: 1 (true)

    cout<<x<<' '<<y<<' '<<z;

    //C++ allows the conversion of a double to int (implicitly) but these leads to loss of data i.e the digits 
    //after the decimal point gets truncated. Similarly ,it allows int to get converted to bool ,and it again 
    //leads to the loss of data i.e. all the non-zero numbers are treated as true and only 0 as false.



    //DATATYPE WIDENING CONVERSIONS: if we have an expression of multiple datatypes the following conversion rules
    //                               are followed 
    // bool --> char --> short --> unsigned short --> int --> unsigned int --> long --> unsigned long --> long long
    // unsigned long long --> float --> double --> long double
    
    //While converting an -ve integer to its unsigned type ,internally its 2's complement is stored in it , and 
    //which gives us an unexpected number. For ex: We will get the highest possible integer value for -1 if 
    //converted to its unsigned form
    int i = -1;
    unsigned int j = i;
    cout<<'\n'<<j<<"\n"; //output: 4294967295

    //Example based on data widening conversion rules:
    char a = 'A';
    int b = 10;
    cout<<(a + b)<<"\n"; //outut : 75
    //char is implicitly converted to int (ascii value of A is 65)

    float c = 5.5; // output : 15.5 (10 converted to float = 10.0)
    cout<<(b + c)<<"\n";



    //Why we need explicit conversions:-
    //Example without explicit conversions:
    int p = 15;
    int q = 2;
    double r = p/q;
    cout<<r<<"\n"; // Output will be 7

    //from the concept of operators precedence , '/'(division) is operated first and then assignment(=) occurs.
    //Here the operands of the division operator are integers, so it will give an integer value only i.e 7 , which 
    //will then be stored in double.

    //Example with C style conversion:
    int s = 15;
    int t = 2;
    double u = double(p)/q;  //Here as we coonverted p to double , implicitly int will get converted to double.
                             //And as both the operands are double , division will give an output which is a double

    cout<<u<<"\n"; // Output: 7.5



    //Example with C++ style conversion: There are many ways but we will focus only on 'static_cast'. It is 
    //                                   preferred over C style conversion because it first checks wheter the 
    //                                   conversion is possible or not, and if not, throws compiler error.
    //                                   But C style conversion dosen't throw error , which can give us unexpected 
    //                                   results 
    
    int s1 = 15;
    int t1 = 2;
    double u1 = static_cast<double>(p)/q;  //Here as we coonverted p to double , implicitly int will get converted to double.
                             //And as both the operands are double , division will give an output which is a double

    cout<<u1; // Output: 7.5


    return 0;
}