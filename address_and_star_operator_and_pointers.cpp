#include <iostream>
using namespace std;

int main()
{
    //& (address of operator) - gives address of a variable:
    int x = 10;
    cout<<&x<<"\n";

    //* (dereference operator) - gives value stored at the given address
    cout<<*(&x)<<"\n";

    //Note: & is also used to 1) Declare references
    //                        2) as a bitwise and operator
    //      
    //      * is also used to 1) Declare pointers 
    //                        2) Multiplication operator

    //So be careful while using them



    //Pointers - stores addresses
    int y = 10;
    int *p;   //Declaring a pointer , 
              //here int is used because this pointer will be used to store the address of an int variable
              //Note: Here 'int *' - is the datatype of pointer p 
    
    p = &y;   //Defining a pointer - by storing address of a variable in it

    cout<<p<<"\n";//It will give the address stored in it

    cout<<*p<<"\n"; //here * referes to 'dereference operator'. So it will display the value at the address stored 
                    //by pointer p

    //Note: Pointers are also varibles, so they are also allocated a memory address
    //Just check the photo on dekstop 

    y = y + 30;
    cout<<*p<<"\n";

    *p = *p + 40; //pointers have the capability to change the values at the loction stored in it
    cout<<y<<"\n";


    //we can also directly initialize a pointer, same as we do for normal variables
    float z = 4.73;
    float *p1 = &z;
    cout<<z<<"\n";

    //size of pointer remains the same though you use it to store the address of a int, a float , etc.
    //Because pointers are basically used to store memory addresses , which will be of same size for any datatype
    int *ptr1;
    char *ptr2;
    string *ptr3;

    cout<<sizeof(ptr1)<<" "<<sizeof(ptr2)<<" "<<sizeof(ptr3);

    //Note: When we declare more than 1 variables of same datatype , we don't use datatype before every variable
    int a, b, c;

    //But in case of ptrs you have to use * before all the pointers
    int *pr1, *pr2; 

    return 0;
}