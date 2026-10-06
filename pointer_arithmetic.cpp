#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1 ,2, 3, 4, 5};
    int *ptr1 = arr1;
    cout<<ptr1<<" "<<*ptr1<<"\n"; 

    ptr1++; //Pointer will jump 4 bytes(int) ahead. It depends on the type of pointer.

    cout<<ptr1<<" "<<*ptr1<<"\n";

    ptr1--;
    cout<<ptr1<<" "<<*ptr1<<"\n";

    int *ptr2 = ptr1 + 3;
    cout<<ptr2<<" "<<*ptr2<<"\n";

    cout<<ptr2 - ptr1<<"\n"; //It gives the no of elements between ptr2 and ptr1. This operation can only be carried
                            //out in between similar pointers (i.e having same datatype)


    //Some practice questions
    //1)
    int arr[] = {1,2,3,4,5};
    int *ptr3 = arr;
    cout<<sizeof(arr)<<"\n"; //4 * 5 = 20
    cout<<sizeof(ptr3)<<"\n"; //independent of dtype

    char arr2[] = {'1', '$', '^'};
    char *ptr4 = arr2;
    cout<<sizeof(arr2)<<"\n";//3 * 1 = 3
    cout<<sizeof(ptr4)<<"\n";

    //2) pre(++) and * have same precedence and both have right associativity
    int arr3[] = {7,2,3,4,5};
    int *ptr_3 = arr3;
    ++*ptr_3;

    cout<<arr3[0]<<"\n"; //8
    cout<<arr3[1]<<"\n"; //2
    cout<<*ptr_3<<"\n";  //8

    //3)
    int arr4[] = {7,2,3,4,5};
    int *ptr_4 = arr4;
    *++ptr_4;   //In this case firstly ptr_4 is incremented, and then it is derefrenced
    127;  

    //Note: We can just code literals , like the above 2 lines , but it is of no use


    cout<<arr4[0]<<"\n"; //7
    cout<<arr4[1]<<"\n"; //2
    cout<<*ptr_4<<"\n";  //2



    //4)post increament operator(++) has higher precedence than *.
    int arr5[] = {7,2,3,4,5};
    int *ptr_5 = arr5;
    *ptr_5++;

    cout<<arr5[0]<<"\n"; //7
    cout<<arr5[1]<<"\n"; //2
    cout<<*ptr_5<<"\n";  //2
}