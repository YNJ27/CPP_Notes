#include <iostream>
using namespace std;

int main()
{
    //(1) BITWISE AND (&): (apply 'and' operation between the corresponding bits of the two numbers)
    int x = 6;     //000....0110
    int y = 3;     //000....0011
    cout<<(x & y)<<"\n"; //000....0010 = 2

    //(2) BITWISE OR (|): (apply 'or' operation between the corresponding bits of the two numbers)
    cout<<(x | y)<<"\n"; //000....0111 = 7

    //(3) BITWISE EXOR (^): (same as above. In exor if the inputs are distinct , o/p will be 1 and if they are same
    //                       o/p is 0)
    cout<<(x ^ y)<<"\n"; //000....0101 = 5
    
    //(4) BITWISE LEFTSHIFT (<<):(shift all the set of bits towards left y(given no of) times ignoring the leading y bits
    //                            and then append y 0's at the end)
    int z = (x << 2); //000...11000 = 24
    cout<<z<<"\n";

    //(5) BITWISE RIGHTSHIFT (>>):(shift all the set of bits towards right y(given no of) times ignoring the traling y bits
    //                            and then add y 0's at the begining)
    int z1 = (x >> 2); //000....0001 = 1
    cout<<z1<<"\n";
    
    //Interesting fact about leftshift and rightshift:
    //(a)Leftshift is equivalent to x*(2^y), only if the leading y bits of x are only zeros
    //    x      y       z(o/p = x*(2^y))
    //    6      2        24  
    //    6      4        96

    //(b)Rightshift is equivalent to floor(x/(2^y)
    //    x      y       z(o/p = floor(x/(2^y))
    //    6      1        3
    //    6      2        1
    
    //(6) BITWISE NOT (~) : (interchange zeros and ones)
    //(a) using unsigned int: (considering 32 bits , the range will be (0 to (2^(32)-1)) 
    // 
    // (2^(32) - 1) = 4294967295 = 111....1111(in binary, i.e all bits as 1)
    unsigned int a  = 3; //000....0011
    cout<<(~a)<<"\n"; //111....1100 = 4294967292
    
    //NEGATION (~x) for unsigned integers = (2^(32)-1) - x 

    //(6) (b) using (signed) int: (we know that here the number with leading(i.e, sign bit) as 1 is the 2's 
    //                             complement representation of a negative number)
    //so what you have to do is compare the below given formulas 
    //1)negation of x = (2^(32)-1) - x
    //2)2's complement representation of '- y' = 2^(32) - y
    int a1 = 3;  //000....0011
    cout<<(~a1); //111....1100 = (2^(32)-1) - 3
    //           therefore by compring the above two formulas we can understand that it is the 2's complement 
    //           representation of '-4'

    //NOTE: It is not prefered to use the negation / bitwise not operator for signed integers because as per c++ 
    //      standards the way of representation of negative numbers is undefined (though most of the compilers use 2's 
    //      complement only)
    //      Same is the case when we are operating left or right shift operators on negative numbers

    int n;
    string day;
    int pos;
    cout<<"Enter the current day: ";
    cin>>day;
    if (day == "saturday")
    {
        pos = 1;
    }

    else if (day == "friday")
    {
        pos = 2;
    }

    else if (day == "thursday")
    {
        pos = 3;
    }

    else if (day == "wednesday")
    {
        pos = 4;
    }

    else if (day == "tuesday")
    {
        pos = 5;
    }

    else if (day == "monday")
    {
        pos = 6;
    }

    else
    {
        pos = 7;
    }

    cout<<"Enter the number of days you want to go back: ";
    cin>>n;
    int no_of_steps = (n % 7);
    
    int finding = (pos + no_of_steps);
    if (finding > 7)
    {
        finding -= 7 ;
    }

    string ans_day;
    if (finding == 1)
    {
        ans_day = "saturday";
    }
    else if (finding == 2)
    {
        ans_day = "friday";
    }
    else if (finding == 3)
    {
        ans_day = "thursday";
    }
    else if (finding == 4)
    {
        ans_day = "wednesday";
    }
    else if (finding == 5)
    {
        ans_day = "tuesday";
    }
    else if (finding == 6)
    {
        ans_day = "monday";
    }
    else 
    {
        ans_day = "sunday";
    }
    return 0;
}