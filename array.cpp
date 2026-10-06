#include <iostream>
using namespace std;

//Array is a collection of 'similar' (having same datatype) items

int main()
{
    int arr1[5]; //declaration . This array will consist of garbage values
                 //datatype array_name[size];
    

    int arr2[7] = {1,2,3,4,5}; //Initialization
                               //Note: if the size of the array is greater then the 
                               //      remaining items will be initialized as zero

                               //NOTE: You can't keep the size of array smaller than the number of 
                               //      elements initialized

    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<arr2[i]<<" ";
    }

    cout<<"\n";


    int arr3[5] = {0};
    //The above technique is used to initialize the array with zeros. Here we just intialize the first element as 0
    
    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr3[i]<<" ";
    }

    cout<<"\n";

    //If you didn't passed the size but just initialized the array with some elements , the compiler will consider 
    //the size as the number of elements without throwing any error

    int arr4[] = {1,23,45,6,7,8,8};

    for(int i = 0 ; i < 7 ; i++)
    {
        cout<<arr4[i]<<" ";
    }     

    cout<<"\n";

    //alternate way to initialize an array
    //1)
    int arr5[] {1,3,45,67,8}; //without equal to sign

    for(int i = 0 ; i < 5 ; i++)
    {
        cout<<arr5[i]<<" ";
    }

    //the above given method can be used to intialize any datatype

    int num1 {7};
    bool check {true};
    cout<<"\n"<<num1<<"\t"<<check<<"\n";


    int arr7[7] = {1,3,5,6,7,23} ;

    //We can get the memory address of the first element of the array or we can say the array itself using:
    cout<<arr7<<"\n";

    //to get the address of an element of an array you can use the below given formula
    // arr + (index * sizeof(arr[0])

    //Size of an array and no of elements in an array
    cout<<sizeof(arr7)<<"\n"; //we will get (7 * 4 = 28)  

    //To get the number of elements we use 
    cout<<(sizeof(arr7) / sizeof(arr7[0]))<<"\n"; //This is the general formula of any type (datatype) of array

    //Trick question
    int arr8[6] = {1,2,3};
    cout<<(sizeof(arr8) / sizeof(arr8[0]))<<"\n";

    return 0;
}