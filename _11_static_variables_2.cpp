//(1) Even if static variables are defined inside a function are allocated a space for life time of the program. 
//    Even if the function is called many times still the same space is accessed and so the value of the variable 
//    in the previous function call is only passed to the next call. While non-staic variables are allocted a new 
//    space everytime the function is called and it gets terminated as soon as the function is executed

//Example for static variable
# include <iostream>
using namespace std;

void func1()
{
    static int x = 1; 
    cout<<x<<" ";
     
    x++;
}

int main()
{   
    for (int i = 0; i < 5; i++)
        func1();                //General output(for non-static variables):
                                //1 1 1 1 1     
                                //Actuall output(for static):
                                //1 2 3 4 5 
    return 0;
}

//(2) Static data members/variables of a class have its value shared will all the objects.And the objects don't have
//    a separate copy of it.

//(3) Static methods can only access static data members of the class.

//(4) If static keyword is used with global variables , it limits its scope to internal linkage.
//    Internal linkage - Once all your included header files are processed and your function declarations are
//                       copied , you get a c++ preprocessed file. The static keyword restricts the scope 
//                       of the global variable to this file an it cannot be accessed outside the file.
//                       That is it can't be accessed by any other file and thus can't be used by any function
//                       which isn't defined in that file 