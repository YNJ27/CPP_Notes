#include <iostream>
using namespace std;

double average(double x, double y)
{
    double avg = (x + y)/2;
    return avg;
    cout<<"YUG has written this code";  //This will not be executed because the execution of a function stops 
                                        //as soon as it encounters the first return statement
}

double getMax(double x, double y)
{
    if (x > y)
    {
        return x;
    }

    else 
    {
        return y;
    }
}

void greeting()
{
    cout<<"Hello brother\n";
}

int main()
{
    double a = 11 , b = 2;
    greeting();         //function call

    cout<<average(a,b)<<"\n"; //printing the value given by return statement

    cout<<getMax(a,b);

    return 0;

}