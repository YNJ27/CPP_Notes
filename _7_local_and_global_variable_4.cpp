#include <iostream>
using namespace std;

int x = 10;
int y = 3;

int main()
{
    int x = 20;
    cout<<x;    // Always if two variables are having the same name 
                // then the one in the nearest scope is accessed 
                // first then the outer one and so on.
    
    //Ex: Using y
    int y = 2;
    {
        int y = 1;
        cout<<"\n"<<y; // here the output will be '1'. 
                       // If we remove that line then o/p will be '2' 
                       // and if we remove that line too it will be '3'.
    } 

    return 0;
}