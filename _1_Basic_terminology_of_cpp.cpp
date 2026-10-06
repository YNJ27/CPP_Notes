#include <iostream> /* here # refers to preprocessor directive
                       i.e it <headerfile> will be appended to the file while preprocessing 
                       Now the header file includes the declarations for the things used in the 
                       program . Here the header file used is iostream - for input and output */


using namespace std; /*namespaces are groups of logical items. Here the namspace 'std' is used. These 
                        are used as containers for identifiers. They are also used to avoid name collisions*/

int main()           /* here int depicts the datatype returned by the main function is an integer
                        We can also use void datatype , but it is not prefered.
                        Note: execution of the code stars from main function only. */


{                        //You should make use of 4 space indent(though not a rule,but for better readability)
    cout<<"Hello World"; //Actually cout is a part of iostream and a part of namespace 'std'
    return 0;            //Here return 0 is used to know whether the program ran successfully       

}

// single line comments are defined using two forward slashes "//". And multiline comments are defined using "/* */".

// Ex: 'int x = 20;', here x is a variable, int is its datatype
// similarly: 'cout<<20;', here 20 is a literal
