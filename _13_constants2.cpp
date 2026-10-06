//Practical usecase of constants
#include <iostream>
using namespace std;

const double PI = 3.1416;

int main()
{
    int r ;
    cin>>r;
    cout<<"Area of the circle is: "<<"\n";
    double area = (PI*r*r);
    cout<<area;
    return 0;
}

//(1) - If you creating a complex mathematical program where you frequently need the const , then you can just make 
//      use of the constant variable name instead of typing the whole constant

//(2) - If in future you want to change the value of the constant(for ex: increasing the precision), instead of 
//      changing it every where you want that variable, you can just change it once where you declared the constant

