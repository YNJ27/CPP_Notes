#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    int *p1 = arr; //Note - arr holds the address of the first element of the array 

    //How can we use the below given lines 
    //Compiler whenever finds var[i] - it converts it to *(var + i). It is not just for array.

    cout<<*(arr + 1)<<"\n"; //so even if we would have written arr[2], the compiler would have innternally converted it to
                      //the above format itself

    cout<<(p1[2])<<"\n"; //3 (i.e value at index two of array)


    //But to get the difference between an array and a pointer and for better readability, it is recommended to 
    //make use of 
    cout<<arr[1]<<"\n"; //for arrays

    cout<<*(p1 + 2)<<"\n"; //for pointers - 
                     //Note -  when we use 'ptr + 2' the adress is increased in multiples of the dtype 
                     //pointed by it i.e if initially '100', then finally '100 + 2(4)' (for int) 

                     //same is in the case of arr


    int arr1[] = {2,4,6,8,10};
    int *ptr1 = arr1;         //arr1 - address of the first element of the array 
    int (*ptr2)[5] = &arr1;   //&arr1 - it is the address of the whole array

    //It is also called as 'pointer to an array'

    //int (*ptr2)[5] - it is a pointer to an address of block of 5 elements
    
    //Note - In the above case brackets are important because - 'int *ptr2[5]' means an array of pointers 

    //How to get the first element in both the cases - 
    cout<<*ptr1<<"\n";

    cout<<**ptr2<<"\n"; //here if we only used 1 dereference operator , we would have get arr1, which is again an 
                        //an address.

    return 0;
}