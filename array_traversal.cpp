#include <iostream>
using namespace std;

int main()
{   int arr1[] = {1,2,34,5};
    int size = (sizeof(arr1) / sizeof(arr1[0]));

    //General:
    for(int i = 0; i < size ; i++) //here we used (i < size) because of the concept of indexing 
    {
        cout<<arr1[i]<<" ";
    }

    cout<<"\n";


    //Range - based (same like 'for val in list' in python) - Used to access the values of each element in the array

    for(int x: arr1)  //Here everytime each element's value is assigned to x;
    {
        cout<<x<<" ";
    }

    cout<<"\n";


    //Changing the values of elements in array

    //general:
    for(int i = 0; i < size ; i++)
    {
        arr1[i] = arr1[i] + 3;
    }

    for(int i = 0; i < size ; i++) 
    {
        cout<<arr1[i]<<" ";
    }

    cout<<"\n";

    int arr2[] = {1,2,34,5};
    //Using reference concept with the help of range based for loop - 
    for (int &x : arr2)
    {
        x += 3;
    }

    for (int x : arr2)
    {
        cout<<x<<" ";
    }

    return 0;
}