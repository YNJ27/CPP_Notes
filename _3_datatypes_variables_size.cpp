#include <iostream>
using namespace std;

int main()
{
    //Note - sizes varies from compiler to compiler.

    //VARIABLES and DATATYPES:
    //integers - 
    short x=1; //To store very samll integers - (size = 2 bytes)
    int y=222222222;  //(size = 4 bytes)
    long z=22222222;  //(size = 4 bytes)
    long long v=3333333333333; //(size = 8 bytes)
    // cout<<sizeof(v)<<" "<<v;
    unsigned short w=3; /*Actually general datatype has its range divided into negtive and positive.But if you 
                          are sure that the value stored will never become negative then you
                          can use unsigned datatypes to provide the whole range to your variable*/
    
    //similarly there are unsigned int,long,long long 
    
    //When used as a literal, integers have the default datatype as int (<= 9), else long long( > 9).


    //FLOATING POINT NUMBERS -
    //Note: floating point numbers may not always return the exact value , but gives you an approx value
    float m = 1.24; //(size - 4)
    double n = 1.236865; //gives better precision (size - 8)
    long double o = 1.236865; //gives even better precision (size - 12)
     
    //When used as a literal, floating point numbers have the default datatype as double  
    
    
    //CHAR- Used to store single character(in the form of ascii or unicode), These should be stored in single 
    //      quotes only(' ')

    char p = '#'; //(size = 1 byte)
    unsigned char q='$'; //(size = 1 byte)
    
    //For unicode implementation there are some more types like wchar_t , char8_t , char16_t , char32_t
    //But these are not generally used in cp and dsa
    

    //OTHERS-
    //1)
    bool a = true;
    // true is internally stored as 1 and false as 0
    

    //2) void - We can't create a variable of void datatype but we can create pointers of void datatype and
    //          functions returning void 



    //sizeof() OPERATOR: - NOTE: 1) it is a compile time operator.
    //                           2) it can give the size of datatypes , variables and even literals.
    //                           3) it provides size in terms of bytes

    cout<<sizeof(int)<<" "; // datatype

    char h ='$';
    cout<<sizeof(h)<<" "; // variable

    cout<<sizeof(22ll)<<" "; //literal
                        // suffix 'll' or 'LL' are used to represent the datatype long long

    cout<<sizeof(3.4)<<" "; // It will not be 4 (for float), because as discussed before , by default 
                      // floating point literals are of double datatype (with size = 8 bytes)

    //special example on the concept of compile time
    int u = 1;
    cout<<sizeof(u++); // Output will be 4 itself , because sizeof() operates during compile time 
    //                    and not during runtime. 

    return 0;

}