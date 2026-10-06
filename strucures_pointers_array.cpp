#include <iostream>
using namespace std;

struct point
{
    int x;
    int y;
};


int main()
{
    //Pointer - 
    point p1 = {10, 20};
    point *ptr = &p1;

    cout<<ptr -> x<<"\n"; //When we want to access the members of structure using a pointer we use '->'(arroy) operator
    ptr -> x = 30;
    cout<<p1.x<<"\n";

    //array of structures -
    point arr[5]; //Array having its each element as a structure

    for(int i = 0; i<5; i++)
    {
        arr[i].x = i;
        arr[i].y = i*10; 
    }

    for(int i = 0; i<5; i++)
    {
        cout<<arr[i].x<<" "<<arr[i].y<<"\n";
    } 

    //You can also access a single element of this array using a same struct type variable (here point)
    point p = arr[1];
    cout<<p.x<<" "<<p.y<<"\n";

    return 0;
}