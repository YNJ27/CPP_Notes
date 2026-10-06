#include <iostream>
using namespace std;

struct num
{
    int x;
    char arr[4];
};

int main()
{
    num n1;
    n1.x = 512;
    char *byte = (char *)(&n1.x);
    for(char *ptr = byte; ptr < byte + 4; ptr++)
        cout<<(int)*ptr<<" ";                     //same output as we got using unions

    //Other ways of type punning
    int r = 20;
    float s = *(float *)&r;
    cout<<"\n"<<s;                        //same output as we got using unions

    //Bad codes:
    int t = 20;
    double u = *(double *)&t;
    cout<<"\n"<<u<<"\n";
    //Here we are first typecasting the integer *(&t) to a double * . So as there is mismatch of size, we are also
    //using the 4 bytes after the 'int t' which are uninitialized(or may be initialized) and dereferencing these 
    //8 bytes , which may lead to future problems or may even crash
//for more examples watch typepunning by 'The Cherno' on YT
    
    return 0;
}