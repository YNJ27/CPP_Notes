#include <stdio.h>

struct info        //We always define structers globally
{
    int roll_no;   //Note: We never initialize the memebers
    float marks;
    char gender;
}i7,i8; //......Note - This semicolon is imp

typedef struct point 
{
    int x_coordinate;
    int y_coordinate;
}s;

void main()
{
    struct info i1;
    i1 = (struct info){21, 67.5, 'M'}; //Order should match

    struct info i4 = {23,66,'F'};

    i7 = (struct info){22,66.8,"M"};

    i8.roll_no = 27;

    struct info i2;
    i2.roll_no = 31; 
    //If you only initialize some memebers, rest will get their default values. int - 0, float - 0.0000, etc.
    //Note: The default value for char is undefined

    printf("\n%d %f %c\n",i2.roll_no, i2.marks, i2.gender);

    struct info i3;
    //But if not all initialize any memebers they will hold garbage values;
    printf("\n%d %f %c\n",i3.roll_no, i3.marks, i3.gender);

    //Still don't keep memebers uninitialized, because the behaviour mentioned above varies from compiler to compiler


    //Initialization using typedef 
    s s1;
    s1 = (s){23,45};
    printf("%d %d\n",s1.x_coordinate,s1.y_coordinate);

    s s2 = {12 , 24};

    s s3;
    s3.x_coordinate = 100;
    s3.y_coordinate = 10;  

    s s4 = {.y_coordinate = 21, .x_coordinate = 31}; //In this way we can also change the order , but this is not 
                                                     //allowed in cpp
                                                     
    printf("%d %d",s4.x_coordinate,s4.y_coordinate);
}