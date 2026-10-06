#include <iostream>
using namespace std;

int main()
{
    const double x = 9.3526;

    // x += 1;
    //Above command will throw error because 
    //we cannot change the value of a constant variable

    cout<<x;
}
// Note: The value of a constant can't be changed , is not completely true we have pointers which can be used 
//       to access the memory location of a variable, here we can do the same to access and even change the 
//       value of x. But this practice is not recommended because it completely violates the usecase of const.

