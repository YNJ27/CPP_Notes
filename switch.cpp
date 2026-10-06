#include <iostream>
using namespace std;

int main()
{
    //switch is used when we require multiple branching in c++

    //a game with left , right , up , down movements and x, y as the coordinates 
    int x = 0;
    int y = 0;
    char move;
    cout<<"Enter your choice: ";
    cin>>move;

    switch(move)
    {
        case 'L': x--;
                  break;
        case 'R': x++;
                  break;
        case 'U': y++;
                  break;
        case 'D': y--;
                  break;

        default: cout<<"Invalid choice\n";
    }
    cout<<x<<" "<<y;

    //It is an important practice to use break after each case in switch
    //This is because the working of switch is like: It executes every thing after the first case is matched.
    //You can check by removing break statements for different places and its impact

    //Switch works same like if else, and mostly we avoid switch
    //The only thing is that switch looks more clean
    
    return 0;
}