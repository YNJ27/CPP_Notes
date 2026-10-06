#include <iostream>
using namespace std;

void func1(string &s)
{
    cout<<s;
}

void func2(const string &s) //If you also want to perform some changes like concatenation on the string literal
                            //you should make use of R-value reference (&&x)
{
    cout<<s;
}

int main()
{
    //Untill now we the refernces used by us were L-valued references i.e you have to intialize them with a 
    //vaiable name only

    //What is L and R
    // x = 7;
    // L   R

    //or
    //s3 = s1 + s2;
    // L       R


    int x = 10;
    int &y = x;

    //But to initialze them using a literal , you have to either use const type reference (const &x) or 
    //R-value reference (&&x)

    // char &z = '#'; - will not compile

    const char &z = '%';
    int &&p = 27;        //program will compile

    // func1("Raja");  will not compile   
    
    func2("Raja"); //will compile fine

    return 0;
}