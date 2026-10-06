#include <iostream>
using namespace std;

template <typename T>
struct Pair{
    T x, y;

    Pair(T i, T j){   //Constructor
        x = i;
        y = j;
    }

    T getFirst(){
        return x;
    }

    T getSecond();
};

//Note: We can also define class fns outside the class by just declaring them inside the class
template <typename T>    //important syntax
T Pair<T>::getSecond()   //Here passing <T> is important and also T is to be written before Pair('i.e class name') 
                         //because the fn has the return type as T 
{  
    return y;
}

int main(){
    Pair<int> p1(10,20),p2(30,40);
    cout<<p1.getFirst()<<" "<<p2.getSecond();
}