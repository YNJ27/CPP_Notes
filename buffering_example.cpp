#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter a number: "; 
    cin>>x;   //Here you can also enter the second number , by giving a space .But this will not give you a chance
              //to provide a number for the next cin .And you will directly get the output , though it will be 
              //correct.
    cout<<"Enter another number: ";
    cin>>y;
    int z = (x*y);
    cout<<"Multiplication is: "<<z;

    return 0;
}