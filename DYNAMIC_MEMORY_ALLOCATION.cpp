#include <iostream>
using namespace std;

//Need for Dynamic memory - 1) Static - remains throughout the program (not in our control)
//                          2) Auto (or Local) - get destroyed once fn call is over (not in our control)

//So to have a memory , which is completely under our control , i.e we can allocate it whenever 'we' want them and
//can also deallocate them whenever 'we' want

int num1; //Global - Data section

void func()
{
    static int a; //Data 
    int b,c;      //Auto (or Local) - Stack
}

int main()
{
    int x, y; //Auto (or Local) - Stack
    int *ptr = new int[5];   //Here we are allocating an array of memory in heap
//  Stack      Heap - (dynamic
//                     memory)


// To allocate single memory address;
    int *ptr1 = new int;

//Check out the diagrams on desktop for better understanding

    return 0;
}