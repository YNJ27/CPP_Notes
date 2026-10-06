#include <iostream>
using namespace std;

//Note : In cpp arrays are passed in a fn in the form of pointers. This is done so as to avoid copying each element
//       the array (low performance problem)

void func1(int arr[])  //The parameter here is equivalent to int *arr (i.e a pointer)
{
    int n = sizeof(arr)/sizeof(arr[0]); //You will get a warning for using sizeof(arr) - Because this will give
                                        //                                               you the size of pointer
    
    //here arr[i] is interpreted as - *( arr + (i * sizeof(int)) )
    //Thus here size of 1(int) is calculated

    cout<<arr[2]<<"\n"; // o/p - 3

    //Thus n = (4(size of ptr) / 4(size of int)) = 1;

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{
    int arr1[] = {1 , 2 , 3, 4};
    int size = sizeof(arr1)/sizeof(arr1[0]);

    for(int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";
    }

    cout<<"\n";

    func1(arr1);

    //So to get the size of array in a fn , we always pass size seperately as a parameter to that fn


    return 0;
}