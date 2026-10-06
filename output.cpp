//Note: The input and output devices are slow (i.e. if we process each and every thing typed by the keyboard ,it 
//be a super slow process), so we make use of buffers .The input provided by the keyboard is stored in the buffer,
//and the program takes the input in chunks. Similarly , the output buffer flushes the output stream, and makes 
//a fresh output stream available

//cout and cin are objects of ostream and istream classes resp.


//OUTPUT:
// << - insertion operator (used to print something on the output screen)

#include <iostream>
using namespace std;

int main()
{
    //We can also output expressions .
    cout<<(10*5)<<"\n"; //This thing also works like a function call where 10 and 5 are like parameters
    
    //endl vs '\n' - both are used to output a new line , but the diff. is that endl also flushes the output stream
    //               Thus '\n' is faster than endl. You may many time encounter 'Time limit exceeded' using endl 
    //               but all clear if used '\n' in the same code
    
    cout<<"yug"<<" "<<"dev"<<endl; //Note: we can also chain the output , that is we can output multiple things 
                                   //using single cout object 
    cout<<"om";

    //You can also output objects of user-defined classes using cout, like normal variables (using the concept of 
    //operator overloading. I.e. we can overload the insertion(<<) operator)
    return 0;
}