#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //if you want to print true and false for boolean then use boolalpha
    bool a = true;
    cout<<boolalpha; //Once you used boolalpha it will work for the whole program ,untill you use noboolalpha
    cout<<a<<"\n";
    bool b = false;
    cout<<b<<"\n";
    cout<<noboolalpha; //Same as boolalpha it also works for the whole program. It again converts the output format
                       //to 0 and 1 again

    cout<<a<<" "<<b<<"\n";

    

    //In case of integers if you want to print the hexadecimal , octal number of the given decimal number
    int x = 10;
    int y = 20;
    cout<<hex; //It also works for the whole program, untill made some changes
    cout<<x<<"\n";
    cout<<y<<"\n";
    
    cout<<oct; //It also works for the whole program, untill made some changes
    cout<<x<<" "<<y<<"\n";

    cout<<dec; //It also works for the whole program, untill made some changes
    cout<<x<<" "<<y<<"\n";

    //Some more io manipulations
    cout<<showbase; //Gives prefixes to octal , hexadecimal , etc. numbers
                    //It also works for the whole program, untill we use noshowbase
    cout<<hex;
    cout<<x<<" "<<y<<"\n";
    
    cout<<uppercase; //Will convert x, a (here) to uppercase.
                     //It also works for the whole program, untill we use nouppercase
    cout<<x<<" "<<y<<"\n";

    cout<<dec;
    cout<<showpos; //Gives + sign infront of positive decimal numbers only, doesn't work with octal,hexadecimal,etc.
                   //It also works for the whole program, untill we use noshowpos     
    cout<<x<<" "<<y<<"\n";
    cout<<noshowpos;



    //setwidth(n), setfill("x") , left , right . for formatting the output
    //but for this you have to also include the header file <iomanip>
    int num1 = 23;
    cout<<setw(5); //the width of the o/p is fixed to 5. If we displayed a variable with smaller length ,spaces will
                   //be added to its left. If it has a length greater than 5 ,there is no change made with the o/p,
                   //And you will get the number itself.
                   //setw(n) works only for single following cout
    cout<<num1<<"\n";

    cout<<setw(5);
    cout<<setfill('$'); //NOTE:Parameter should be given in the form of character, i.e inside single quotes
                        //The parameter passed inside setfill is added instead of spaces before the variable
                        //We can also pass space(' ') as the parameter
                        //Unlike setw(n),setfill('*') once set works for the whole program
                        //But it is useless without setw(n)
    cout<<num1<<"\n";

    cout<<setw(5);
    cout<<setfill('$');
    cout<<left;        //It alligns the variable to the left and the filling characters to the right
                       //Allignment(left (or) right) once set works for the whole program
                       //But it is useless without setw(n)
    cout<<num1;

    return 0;
}