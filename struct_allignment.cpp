#include <iostream>
using namespace std;

struct Student
{
    int rollno;
    float marks;
    char gender;

};

int main()
{
    cout<<sizeof(Student);

    //To be continued .. 1) compiler dependent
    //                   2) ascending or descending order w.r.t size is preferred to get least possible size
    //                   3) Allignment depends on the largest member
    //                   4) Also each datatype have its own allignment requirements , except char
    //                      ex: int - should be stored on memory locations which are mulitiples of 4 (x00)
    //                          double - multi. of 8 (x000)
    //                   5) Allignmenets - because cpu reads in bunch (8 - 64 bit, 4 - 32 bit), to save cpu cycles
    //                   6) also allows compact allignment (i.e only the size of members), 
    //                      but leads to performance issues and isn't preferred
    
    return 0;
}