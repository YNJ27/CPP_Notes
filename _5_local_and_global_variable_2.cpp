#include <iostream>
using namespace std;

int x; //Global variables if just declared , will posses :
       // int - 0
       // float - 0.0
       // bool - false (i.e. nothing but 0)
       

int main()
{
    int y; //Local variables if just declared , may posses any 'garbage value' or '0'.
    cout<<x<<"\n";
    cout<<y;
    return 0;
}