#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2,3,6,7,9};

    for(int x : arr) //In this case , again a copy of each element is stored in x / assigned to x.
                     //Thus we will again face the problem of - no chamges reflected
    {
        x = x * 2;
    }

    for (int x : arr)
    {
        cout<<x<<" ";
    }
    
    cout<<"\n";

    //Again it can be solved using reference
    for(int &x : arr)
    {
        x = x * 2;       
    }

    for (int x : arr)
    {
        cout<<x<<" ";
    }

     cout<<"\n";

    //Also we face the problem of low performance , if we travel through a container storing large strings
    //So we will again make use of reference
    string arr1[] = {"Geeks for Geeks", "Code with Harry"};

    for(const string &s: arr1)
    {
        cout<<s<<"\n";
    }

    return 0;

}