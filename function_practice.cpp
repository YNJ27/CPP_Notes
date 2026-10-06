#include <iostream>
using namespace std;

void print(int x)
{
    cout<<x<<"\n";
}

int factorial_rec(int x)
{
    if ((x == 1) || (x == 0))
    {
        return (1);
    } 

    else 
    {
        int fact = (x * factorial_rec(x - 1));
        return (fact);
    }

    
}


int main()
{   int j;
    int i = 2; 
    print(++i); //When you give some expressions as an argument to functions , they are evaluated first and 
                //then assigned to the specific variables

    cin>>j;
    cout<<factorial_rec(j) ; // In recursive functions the terminating condition (i.e mostly the if block should 
                             //                                                   be present)
                             //Otherwise it will work like an infinite loop

    return 0;
}
