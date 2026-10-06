//assignment and compound assignment operators:
// = , += , -= , *= , /= , %= 
// Bitwise compound operators :(1) &= - bitwise and equalto
//                             (2) |= - bitwise or equalto
//                             and so on



//COMPARISON OPERATORS:
// > , < , == , >= , <= ,!=

//Note : in c++ if you forgot one equalto sign, while comparing two numbers it will carry out assignment and the 
//compiler will run without giving you any error (Drawback)

//But in other languages like python if you did so in if-else statements ,print statements, loops , 
//they will throw an error.

//Ex:
#include <iostream>
using namespace std;

int main()
{
    int x = 10;
    int y = 20;
    cout<<(x = y);


//A new comparison operator was introduced from c++ 20 - '<=>'
//(1)If the first operand is less than the second one, the output will be less than 0
//(2)If both the operands are equal , then the o/p will be 0
//(3)If the first operand is greater than the second one, the output will be greater than 0

//It will not work , because I may have an older version

}

