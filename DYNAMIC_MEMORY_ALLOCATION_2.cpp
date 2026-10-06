#include <iostream>
using namespace std;

int * func1()
{
    int a = 10;
    int *ptr = &a;
    return ptr;
}

int *func2()
{
    int *ptr = new int;
    *ptr = 11;
    return ptr;
}



int main()
{
    cout<<*(func1())<<"\n"; //Here you are trying to dereference the memory address (of 'a'), which is already destroyed
                      //So the behaviour of this program is undefined(may throw error), and it isn't recomended to 
                      //use such program.

    //Though modern compilers may give you the exact value 10,we should not rely on such wrong code
 
    //Now when we use dynamic memory
    cout<<*(func2())<<"\n";
    //We can also further make use of this memory 
    int *ptr1 = func2();
    *ptr1 = 20;
    cout<<*ptr1<<"\n";

    //We can free this memory by using delete
    delete ptr1;

    //To delete an array of memory-
    int *ptr3 = new int[3];
    delete [] ptr3;

    ptr1 = nullptr; //This is done because, the pointer still points to the deallocated memory (which is an invalid
                    //memory), and using it further somwhere is a risky work, and may raise problems
    ptr3 = nullptr;

    //It is important to deallocate a memory (which was allocated on heap) when not in use. Otherwise heap will get
    //full and cause 'Memory leak' like problems

    //More about 'new' -
    //1) It is an operator (which is always used for dynamic memory allocation)
    //2) It returns a pointer to the memory allocted on heap. 'new int;' here int is the datatype of this pointer
    //(In C we make use of functions(for dynamic allocation) and they return a pointer 'void *'. And we have to 
    // typecast it later)

    //3) When used in classes and structers it calls the constructer
    //4) We can also initialize value using this operator

    //Initializing single element
    int *ptr = new int(7);
    cout<<*ptr<<"\n";

    //Initializing array of elements 
    int *ptr4 = new int[5]{1,2,3,4,5};
    cout<<*ptr4<<"\n";
    cout<<*(ptr4 + 1)<<"\n";
    cout<<*(ptr4 + 2)<<"\n";
    cout<<*(ptr4 + 3)<<"\n";
    cout<<*(ptr4 + 4)<<"\n";

    delete ptr;

    return 0;
}