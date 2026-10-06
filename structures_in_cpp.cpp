#include <iostream>
using namespace std;

struct student 
{
    int roll_no;
    float marks = 35; //(Unlike C) we can initialize memebers inside the structure. This are considered as default
                      //values of these members
    string name;
}s4,s5;

typedef struct point
{
    int x = 20; 
    int y;
}p;


int main()
{
    student s1 = {22, 35.5, "Ramesh"}; //(Unlike C) There is no compulsion of using struct before student 

    student s2;
    s2 = {21, 35, "Raj"}; //here too there isn't any need to write the name of the structure inside a bracket 
    cout<<s2.roll_no<<"\n";
    cout<<s2.marks<<"\n";
    cout<<s2.name<<"\n";

    student s3;
    s3.roll_no = 31;
    cout<<s3.roll_no<<"\n";
    cout<<s3.marks<<"\n";
    cout<<s3.name<<"\n";

    s4 = {31,77.8,"ramesh"};

    s5.marks = 98.6;
    
    p p1 = {11,7};
    cout<<p1.x<<"\n";
    cout<<p1.y<<"\n";

    p p2;
    p2 = {10,21};

}