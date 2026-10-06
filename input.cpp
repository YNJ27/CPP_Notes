//here we make use of extraction operator (>>)
//we can also chain multiple inputs using cin object.
#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter two numbers:"<<"\n";
    cin>>x>>y; //Here you can give input in two ways 
               //1)Give the first number,then give a space,then give the second number and at the end press enter
               //2)Give the first number,then press enter,then give the second number and at the end press enter again
    
    int sum = (x + y);
    cout<<"sum of the given numbers is: "<<sum<<"\n";


    //If you want to give an input string with space you have to make use of getline() function.
    //Because if you put space in case of cin it will consider the word after the space as the second input and 
    //will ignore it

    string name;
    cout<<"What's your name?\n";
    cin.ignore();                //it is important to use cin.ignore() when you use getline() after cin>>
                                 //Because whenever you give an input using cin you also press enter, which is
                                 //nothing but '\n'.Therefore your input buffer consists of the given input and '\n'
                                 //And the >>(extraction operator) only extracts the input and ignores the 
                                 //whitespaces or escape sequences
                                 //But if you used getline(), it extracts that ignored '\n' which doesn't allow us 
                                 //to give an input to it
                                 //cin.ignore() just throws/discards these unwanted characters

    getline(cin,name);
    cout<<"Hello "<<name<<"!\n";
    cout<<"Welcome to GfG";
 
    return 0;
}