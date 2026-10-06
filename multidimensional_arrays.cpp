#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //2d - arrays
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    
    //For traversing through a 2d array, we require 2 nested for loops (one for row and the second for column)
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }


    //1) It isn't compulsory to make use of internal brackets 
    int arr2[3][2] = {1, 2, 3, 4, 5, 6};

    //2) Elements are stored in row major order - (See the photo 'Multidim. array')

    //3) You can only omit the first dimension while initializing
    int arr3[][2] = {{1,2},{3,4},{5,6}};

    int arr4[][2][2] = { {{1,2},{3,4}},
                        {{5,6},{5,6}}};

    cout<<"\n";

    //We can also initialize arrays having variable size
    int m = 3, n = 2;
    int arr1[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            arr1[i][j] = 10;
            cout<<arr1[i][j]<<" ";
        }
        cout<<"\n";
    }

    cout<<"\n";

    //Other methods - 
    //1) Using double pointer
    int m1 = 3, n1 = 2;
    int **arr5;
    arr5 = new int*[m1];

    for(int i = 0; i < m1; i++)
    {
        arr5[i] = new int[n1];  //here we can have each row with different sizes
    }

    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n1; j++)
        {
            arr5[i][j] = 10;
            cout<<arr5[i][j]<<" ";
        }
        cout<<"\n";
    }

    //Advantage - Can be easily passed as an argument to a function
    //Disadvantage - Performance issue(slow) - (Not contiguous memeory is allocated, may suffer from cache misses)
    
    //Once check the image on desktop

    cout<<"\n";

    //2) Using array of pointers
    int m2 = 3, n2 = 2;
    int *arr6[m2];
    for(int i = 0; i < m2; i++)
    {
        arr6[i] = new int[n2];     //here also we can have each row with different sizes
    }

    for(int i = 0; i < m2; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            arr5[i][j] = 10;
            cout<<arr5[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    //3) Using array of vectors - 
    int m4 = 3, n4 = 2;
    vector <int> arr7[m4];

    for(int i = 0; i < m4; i++)
    {
        for(int j = 0; j < n4; j++) //Here you can also make use of 'arr7[i].size()', to get the size of vector(which is nothing but an object)
        {
            arr7[i].push_back(10);   //Here we can have rows of dynamic sizes(i.e they can grow and shrink as per 
                                     //users wish)
        }      

    }

    for(int i = 0; i < m4; i++)
    {
        for(int j = 0; j < n4; j++)
            cout<<arr7[i][j]<<" ";   //We can access the elements of vectors in the same way as that of array
        
        cout<<"\n";
    }

    //4) Vectors to vectors
    int m5 = 3, n5 = 2;
    vector <vector <int>> arr8;    //here we can have both rows and columns of dynamic sizes
    for(int i = 0; i < m5; i++)
    {
        vector <int> v;
        for (int j = 0; j < n5; j++)
            v.push_back(10);

        arr8.push_back(v);
    }

    for(int i = 0; i < arr8.size(); i++)
    {
        for(int j = 0; j < arr8[i].size(); j++)
            cout<<arr8[i][j]<<" ";   //We can access the elements of vectors in the same way as that of array
        
        cout<<"\n";
    }

    //for 2), 3), 4) the advantages and disadvantages are the same

    return 0;
}