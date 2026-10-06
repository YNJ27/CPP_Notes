#include <iostream>
using namespace std;

void fun1(int id , string name = "NA" , string address = "NA") //If no arguments are provided for name and address
                                                               //default values will be used 
{
    cout<<"id : "<<id<<"\n";
    cout<<"name : "<<name<<"\n";
    cout<<"address : "<<address<<"\n";
}

int main()
{
    fun1(1213 , "Sandeep", "Noida"); //Default values are ignored
    cout<<"\n";
    fun1(1231, "Shriram"); // NA will be used for address
    cout<<"\n";
    fun1(1243); //Default values for name and address will be used
    return 0;
}

//Some rules: (1) The variables/parameters given the default values must be present only in the end
//               And once the default valued parameter is passed , every following parameter must be a default one
//               For ex: 
//                     1) void fun1(int id , string name = "NA" , string address = "NA") ........(correct)

//                     2) void fun1(int id, string address = "NA", string name ) ........(wrong - 
//                                                                                        will get compiler error)

//            (2) The default values should be passed in either of the declaration or defination of the function
//                Prefered to use it in the declaration, for better understandibility of the code
 
