#include <iostream>
using namespace std;

// In a same scope no two variables can have the same name

int x = 1;
// int x = 2; ***

int main()
{
    int y = 10;
    // int y = 20; ***
    
    cout<<x<<"\n"<<y; //Note: If you uncomment the starred comments , you will get an error.
}