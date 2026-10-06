#include <iostream>
using namespace std;

void fun1(int x){}
void fun1(int *x){}

int main()
{
    //Basically 'NULL' is just a macro defined with value 0 in cpp
    //This can have problems in some cases

    //Ex: 
    int num1 = NULL; //Though 'NULL' is some address/pointer related thing , it will be compiled and will just 
                     //throw a warning
    cout<<num1;

    //But it dosen't works with nullptr;
    //int num2 = nullptr; ........ will not compile

    fun1(NULL); //It will not throw error in vscode and will call the int parameter wala fn, but in other compilers 
                //It throws error , ambigious call to fun1
                //This is because 'NULL' is just a macro with value 0.

    //But if you run the same code with nullptr, it will pickup the right function

    return 0;
}