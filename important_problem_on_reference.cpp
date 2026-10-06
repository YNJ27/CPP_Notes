#include <iostream>
using namespace std;

int & func1() //Here if we just use 'int func1()' the func1 will just return the "value" of x , which can't be 
              //assigned to a L-valued reference y (&y)
              //Using & means the func1() will return a reference of x
{
    static int x = 10; 
    return x;
}

int main()
{
    int &y = func1();
    y = 20;

    cout<<func1(); //20

    return 0;
}