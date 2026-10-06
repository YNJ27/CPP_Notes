#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    int z = x + x * y; //as per the operator precedence, firstly x*y, then + x and then the final o/p is assigned to z
    cout<<z<<"\n"; //210

                  
    z = y / x * x; //this is first time we are using this syntax. This is the way in which we can change the value
                   //assigned to a variable 
    
    //as both have the same precedence ,we should check associativity i.e, left to right
    //it means that we have to evaluate the expression from left to right, i.e, 
    //1) y / x
    //2) then its o/p * x
    //3) assigning the final o/p to z
    
    cout<<z<<"\n"; //20

    z = y = x; //again by checking the assosiativity, i.e, right to left
               //1) y = x
               //2) z = y
    
    cout<<y<<"\n"; //10
    cout<<z<<"\n"; //10

//The best practice to avoid the confusion of precedence and associativity is to use brackets. It also makes the 
//code more readable 

//And if you want to make operations in your desired order then brackets are must. Because the order may not follow 
//precedence and assosiativity
    
    return 0;
}

