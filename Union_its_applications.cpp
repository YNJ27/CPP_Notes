#include <iostream>
using namespace std;

    union point
    {
        int x;
        int y;
    };

    union point1
    {
        float x1;
        int y1;
    };

    union num
    {
        int x;
        char arr[4];
    };

int main()
{
    point p1;
    p1.x = 10;
    cout<<p1.y<<"\n";

    p1.y = 20;
    cout<<p1.x<<"\n";

//syntaxes are same as that of structures , but here both x, y are assigned the same memeory.

//If members having different dtypes are declared. A memory of size equal to that of the largest dtype(wrt size) is
//assigned as common for all

//Applications :
// 1) Type punning: 
    int m = 20;
    float n = m;

    point1 p;
    p.y1 = 20;
    cout<<n<<" "<<p.x1<<"\n";

    //Case 1: We are typecasting the 'integer' into a 'float' and allocating this float a new memory
    //        Here both the memory will be holding different info.

    //Case 2: Here we aren't altering the info at the address and we are representing the same address (or info at 
    //        that address) in the form of a float


    num num1;
    num1.x = 512;
    cout<<(int)num1.arr[0]<<" "<<(int)num1.arr[1]<<" "<<(int)num1.arr[2]<<" "<<(int)num1.arr[3]<<" ";


    //2) Using anonymous uniouns for using same type for multiple purposes

    struct Node
    {
        int data;
        union
        {
            struct
            {
                Node *left, *right;
            };

            struct
            {
                Node *prev, *next;
            };
        }; 
    };

//Because of this union we can use this struct for both a binary tree and a doubly linked list

    return 0;
}