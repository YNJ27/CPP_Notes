#include <iostream>
using namespace std;

void func1(int x) //This x and the x defined in the main are completely different, i.e. both have completely 
                 //memory location allocated (concept of function call stack)
                 //Thus there will not be any change in the value of x in the main fn

{
    x = x + 5;
}

void func2(int &x) //Use 1) - to overcome the problem that changes aren't reflected
                   //         This is very useful in the swapping of two numbers
{
    x = x + 5;
}

void func3(string s)
{
    cout<<s;
}

void func4(const string &s) //We may not used const . It is used if we are using reference for only improving the 
                            //performance and we want to avoid any changes made to it
{
    cout<<s;
}

int main()
{
    int x = 10;


    func1(x);

    cout<<x<<"\n"; //10

    func2(x);
    cout<<x<<"\n"; //15

    string s = "Geeks for Geeks , Code with Harry, Love Babbar, Striver"; //Strings can be very very long, because 
                                                                          //there isn't any limit for size of
                                                                          //string in cpp

    func3(s); //Now as we know the whole string object will be copied in the parameter of this fn ,it leads to low 
              //performance 

    

    return 0;

}