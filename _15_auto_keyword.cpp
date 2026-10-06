#include <iostream>
#include <typeinfo>

using namespace std;

int main()
{   //auto keyword khud hi datatype decide karleta hai 
    //(using the default datatypes of literals)
    
    auto x = 3;
    auto y = 2.44;

    cout<<typeid(x).name()<<'\n'<<typeid(y).name();
    return 0;
}

//Advantages of auto keyword 
//(1)"No conversions take place", also you need not need to worry about defining the correct datatype to a variable
//    Also defining a datatype can also cause some mistakes in the working of your code
//Ex:
// unsigned int num1 = -10; (if you printed it using cout you will get 4294967286)
// auto num1 = -10; (if you printed it , you will get -10 itself)


//(2)Once you include auto in your function declaration , you can without worrying change the datatype of the 
//   returning value (i.e there is no need to change the function prototype)

// auto compute() {
//     return 3.14; // returns double
// }

// auto compute() {
//     return 3.14f; // returns float (Thus without making changes in the function, you were able to change the 
// //                                  datatype of the returning value)
// }


//(3)You can avoid writing lengthy names for datatypes (especially iterators in STL)
//STL - (Standard Template Library) = It has all datastructures inbuilt , ex: hash ,queue ,vector,etc.

//vector<int>::iterator i; (this is the datatype of an iterator) Instead of this you can simply use :-
//auto i

//(4)There is a need to use auto keyword as the return type for lambda expressions because the return type of a 
//   lambda expression is only known/interpreted by the compiler
//   You can also some methods like std::function<o/p datatype(i/p datatype)> but it becomes more complex
