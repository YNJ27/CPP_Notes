#include <iostream>
using namespace std;

//similarity between static and global variables
static int num1;
static double num2;
static bool a;        //Like global variables static variables also posses 0, if just declared and not initialized

int main()
{
    cout<<num1<<"\n"<<num2<<"\n"<<a;
    return 0;
}

//***NOTE - Any type of static variables are allocated a space for the complete lifetime of the program 