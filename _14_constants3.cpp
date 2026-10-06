//Alternative to const

//We can make use of C style preprocessor directives to create a dummy constant. It will replace the value of that 
//constant wherever we used it

//It holds the same advantages as that of const

//But it is not preferred as :- 1) It blindly substitutes the value. Therefore if a place where the datatype which 
//                                 is not allowed is substituted will generate problems.

//                              2) Also const variables can be used like normal variables, that is we restrict them
//                                 in a scope, which can't be done using these directives

//Example code:
#include <iostream>
using namespace std;

#define PI 3.14

int main()
{
    int r ;
    cin>>r;
    cout<<"Area of the circle is: "<<"\n";
    double area = (PI*r*r);
    cout<<area;
    return 0;
}

