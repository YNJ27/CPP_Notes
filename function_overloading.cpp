#include <iostream>
using namespace std;

//In function overloading you can have more than 1 functions with different type of / number of parameters but 
//pocessing the same name. The compiler will choose the appropriate function based on the passed arguments during 
//function call. This is helpful to avoid finding different names for the functions performing similar tasks

//set1 - 
int myMax(int x , int y)
{
    return ( (x > y)? x : y );
}

int myMax(int x , int y, int z)
{
    return myMax((x , y), z);
}


//set2 - 

char printing(char c)
{
    cout<<c<<"\n";
}

string printing(string str)
{
    cout<<str<<"\n";
}

int printing(int num1)
{
    cout<<num1<<"\n";
}


//set3 - 
//The below given functions can't be overloaded because they only differ by their return type. There should be some
//difference in thier parameters

// char is_first_max(int x, int y)
// {
//     if (x > y)
//     {
//         return ('Y');
//     }

//     else
//         return ('N');
// }

// bool is_first_max(int x, int y)
// {
//     if (x > y)
//     {
//         return (true);
//     }

//     else
//         return (false);
// }


//set4 - 
void print1(int x = 0)
{
    cout<<x;
}

void print1()
{
    
}



int main()
{
    //set1-
    cout<<myMax(10,20)<<"\n";
    cout<<myMax(10,20,30)<<"\n"; //change in the number of parameters

    //set2-
    cout<<(23);
    cout<<("YUG"); //Here the type of argument is actually is 'const char *' , but as the compiler will not be
                   //able to find such function so it will get converted to string automatically

    cout<<('a');   //similarly if you removed the char wala fn , then 'a' will automatically get converted to its
                   //ascii value and the compiler will make use of the int wala fn without any error

    //NOTE: Set2 don't have any different logic unlike set1, the only difference among the functions in set2 
    //      is that they have parameters with different datatypes . In such a situation templates are more 
    //      convinient. Here we just have to pass the datatype , and there is no need to write n number of codes
    //      for different datatypes


    //set4 - 
    //Also you should be careful while using default arguments

    // print1();  ....it can't be exeuted because both are the possible functions to be executed
}