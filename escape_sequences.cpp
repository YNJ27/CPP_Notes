#include <iostream>
using namespace std;

int main()
{
    //Let's say you want to print a string including a word written inside double quotes
    //string a = "Welcome to "GeeksforGeeks""; ......This line will throw error
    //                                               To overcome this you have to make use of the escape sequence \".
    string a = "Welcome to \"GeeksforGeeks\"";
    cout<<a<<"\n";
    
    // There are many such escape sequences like \n,\t,\r,etc.

    //Lets say you want to print a string with \(backslash) present in it.
    // string b = "Printng \ example"; .......This will give you a warning of unknown escape sequence for backslash
    //                                        To overcome this you should use \\ which is a valid escape sequence
    string b = "Printng \\ example";
    cout<<b<<"\n";
    //The practical use case of \ is for storing path in a string 

    string c = "c:\\xyz\\cpp\\escape_sequence";
    cout<<"File Name: "<<c;


    return 0;
}