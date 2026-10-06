#include <iostream>
using namespace std;

int main()
{

    int *ptr = NULL; //NULL is used to initialize a pointer, which initially don't have any valid memeory address
                     //It is better than keeping a ptr uninitialized 

    //Actually null = 0 in c++; it is kept as a special integer for an invalid memory address

    int *ptr1 = 0; //Compiles fine
    // int *ptr2 = 1; .....  But it is not the case for other integers. They aren't considered as a valid address

    //1) We can initialize any type of pointers as null
    char *p1 = NULL;
    double *p2 = NULL;

    //2) Null gets converted into boolean 'false', and other all pointer values are converted into boolean 'true'
    if(ptr)
        cout<<"Not Null";

    else
        cout<<"Null";

    //3) Null is also used as a returning value of a function(who has pointer as its return type), 
    //   i.e. if it returns null then consider something went wrong, else it will return a valid memory address

    //4) Also useful in datastructres like linked list,etc.   
    

    return 0;
}