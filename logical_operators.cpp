//These operators require two boolean values as inputs or operands
//i.e, they require two comparison expressions as input

//   BINARY
// && - logical and - o/p is true if both the values are true
// || - logical or  - o/p is true if one the values are true

//   UNARY
// ! - logical not - gives the negation as the o/p

#include <iostream>
using namespace std;
 
int main()
{
    int num1 = 3;
    int num2 = 4;
    bool a = (num1 == num2); //(a = 0)

    cout<<((num1 > 0) && (num1 < num2))<<"\n"; //1
    cout<<((num1 > 0) || (num1 > num2))<<"\n"; //1
    cout<< !a<<"\n";



//SHORT CIRCUITING IN C++:
//(1) - In logical and 
    int num3 = 9;
    cout<<((num3 < 0) && (num3++))<<"\n"; //0
//                        -------
    cout<<num3<<"\n"; //9
    
    //Note: We cannot give input as an increment expression in logical operators in other languages.
    //      They only require comparison expressions(or boolean values).
    //      But in C++ bool, every non-zero number is treated as true(1) and zero as false(0)
    //      And num3++ is an integer

    //As we know that if the first i/p for 'and' is false , its o/p will definetly be false irrespective of the
    //the second i/p.
    //In the same way, if the first operand to a && operator is false , the compiler doesn't check/execute the 
    //second operand/(here)expression. And directly gives the o/p as false

    //Thus though you excpect that the value of num3 is increased, it remains the same.

//(2) - In logial or
//(A) - With short circuiting
    cout<<((num3 > 0) || (num3++))<<"\n"; //1
    cout<<num3<<"\n"; //9
    //As we know that if the first i/p for 'or' is true , its o/p will definetly be true irrespective of the
    //the second i/p.
    //In the same way, if the first operand to a || operator is false , the compiler doesn't check/execute the 
    //second operand/(here)expression. And directly gives the o/p as true
    
    //Thus though you excpect that the value of num3 is increased, it remains the same.

//(B) - Without short circuiting
    cout<<((num3 == 0) || (num3++))<<"\n"; //1
    cout<<num3<<"\n"; //10

    //Here operand1 is false, so compiler goes for operand2. It increases num3. As num3++ is a +ve integer, it will
    //give the o/p as 1(true).
    //Now as the expression num3++ got executed , 10 will be displayed (for 2nd cout)


    return 0;
}