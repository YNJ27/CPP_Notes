#include <iostream>
using namespace std;

//Again we are solving the two problems - 1) No change reflected
//that we solved solved reference         2) Low Performance - because the large objects are copied
//                                           in the fn parameters 

int *ptr1, *ptr2;

void swap(int *p1, int *p2) 
{
    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
}

void print(string *p1)
{
    cout<<*p1;
}

int main()
{
    int a , b;
    a = 2;
    b = 5;

    cout<<a<<" "<<b<<"\n";

    swap(&a, &b);
    cout<<a<<" "<<b<<"\n";

    string s = "GFG karlo ho jayega, Love Babbar, Code with harry, Striver";
    print(&s);

    return 0;
}
