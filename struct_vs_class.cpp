#include <iostream>
using namespace std;

class point
{
    int x;
};

struct point1
{
    int x;
};

class point2
{
    public:
    int x;
};

//We can implement all the properties of classes in structures
struct coord
{
    int x;
    int y;

    coord(int a, int b) //Constructer
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout<<x<<" "<<y<<"\n";
    }
};


//Difference in case of inheritence
class Base
{
    public :
    int x;
};

class Derived: Base {}; //Here as we didn't mentioned any inheritance type, default is private



struct Base1
{
    int x;
};

struct Derived1: Base1{}; //Here as we didn't mentioned any inheritance type, default is public



int main()
{
    point p;
    // p.x = 21; ..... Will not work because in classes, members are private by default

    point1 p1;
    p1.x = 31; //Will work because in structures, members are public by default 

    //Still you can change their behaviour using 'public' and 'private' declaration.

    point2 p2;
    p2.x = 55; //This will work


    coord c1(2,4);
    c1.display();

    Derived d1;
    // d1.x = 10; ...Will not work

    Derived1 d2;
    d2.x = 10;

    //It is preferred to implement structers when we just want a composite datatype and to implement some basic 
    //mathematical fns on them

    //It is preferred to implement classes when we care about data hiding and when we are creating a proper 
    //obeject oriented software

    return 0;

}