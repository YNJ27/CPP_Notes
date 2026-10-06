#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    //prefixes: 0-octal,    0x/0X   -    hexadecimal ,     0b/0B     -     binary(added from c++ 14).
    //                   case insensitive              case insensitive

    int decimal = 124;
    int hexadecimal = 0x12A; //Note: you can also use small letters for numbers from 10 to 15(case insensitivity)
    int octal = 0124;
    int binary = 0b1011;

    cout<<hexadecimal<<"\n"<<octal<<"\n"<<binary; //The compiler will convert all these numbers into decimal 
                                                  //and will then print them


    //suffixes: u - unsigned, l - long , ll - long long , ul - unsigned long , ull - unsigned long long 
              //NOTE: All these suffixes are also case insensitive

    unsigned int uint = 10U;
    long lg = 100000L;
    long long lg_lg = 1000000000LL;

    cout<<"\n"<<uint<<"\n"<<lg<<"\n"<<lg_lg<<"\n";


    //floating point numbers
    //suffixes: f = float , l = long double , no suffix for double (because the builtin datatype of floating point 
    //                                                              numbers is double)
    //here too the suffixes are case insensitive
    
    float fl = 2.3F;
    float f1 = 2.1e15; //here e15 = 10^(15). Output = 2.1e+15
    //Note: If power is in the defined threshold of float , it will display it in the form of normal numbers
    //      But if it crosses the threshold it will display in the form of e(power). Same is for double and 
    //     long double . We can define our own threshold using libraries. 

    double f2 = 200.1e-80; //Output = 2.001e-78
    float f3 = 2.1e2F; //Output = 210 (because it is inside the range)
    cout<<fl<<"\n"<<f1<<"\n"<<f2<<"\n"<<f3<<"\n";


    //char and string: prefixes - ASCII = no prefix
    //                            UTF-8 = u8
    //                            UTF-16 = u
    //                            UTF-32 = U
    //                           wchar_t = L (application/compiler dependent unicode)
    char c = 'g';
    const char *s1 = "gfg"; //(string literal is stored in static memory(so we used const), char is used 
    //                         because it is a character sequence and * is used to store the address of the 
    //                         string literal in s1. Datatype of the string literal is 'const char *')
    //It will be teached well in pointers

    string s2 = "geeks"; //Here a new string object or variable is created and the string literal is copied in it 

    cout<<s1<<"\n"<<s2<<"\n";
    return 0;
}