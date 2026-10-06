#include <iostream>
using namespace std;

int main()
{
    int x = 20; //varaiable name is like a label using which we can access a memory location
    int &y = x; //Here y is called reference , which acts as another label for the same memory location which is
                //is labelled by x

    cout<<y<<"\n";

    //Thus as both are labels for the same memory location, changes made in one will be reflected in other too
    x = x*2;
    cout<<y<<"\n";

    y = y + 1;
    cout<<x;

    //rules - 1) References must be initialized , because they are used as an alias for existing variables
    //           to overcome the concept of copies(for ex: in functions). 
    //           Because of this ,they are safer than pointers(as they can be un-initiallized)

    //        2)They can't be null - (Limitation)
    //        3)They can't be changed. i.e. they can't change the reference from one location to 
    //          other once initialized. (while pointers can) -(limitation of references) 

    //Due to 2) and 3) we can't use them to operate with datastructres . So we require pointers
    return 0;
}