#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    string name;
    float marks;
    char gender;
    string address;
};

void print(Student s)
{
    cout<<s.rollno<<"\n";
    cout<<s.name<<"\n";
    cout<<s.marks<<"\n";
    cout<<s.gender<<"\n";
    cout<<s.address<<"\n";
}

void print1(Student &s) //Again if you don't want to allow any changes, you may use 'const' before the dtype 
{
    cout<<s.rollno<<"\n";
    cout<<s.name<<"\n";
    cout<<s.marks<<"\n";
    cout<<s.gender<<"\n";
    cout<<s.address<<"\n";
}

int main()
{
    Student s1 = {21, "Krish", 87.5, 'M', "Dwarka School Varanasi"};
    print(s1); //This is pass by value, thus whole s1 is copied in s.(Low performance)
               //Also if you modify any members inside the fn , changes willn't be reflected in the original s1

    //So either use pass by reference or make use of pointers - It will solve both the problems
    print1(s1);
    
    return 0;
}