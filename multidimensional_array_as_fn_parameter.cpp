#include <iostream>
#include <vector>
using namespace std;

// M - 1) - Specific solution
void print(int arr[4][2]){

    for(int i = 0; i < 4; i++){

        for(int j = 0; j < 2; j++){

            cout<<arr[i][j]<<" ";
        }
    }
}

// M - 2) - Generalized for rows, but still columns are fixed 
void print(int arr[][2],int m){

    for(int i = 0; i < m; i++){

        for(int j = 0; j < 2; j++){
            
            cout<<arr[i][j]<<" ";
        }
    }
}

void print(int **arr, int m, int n){  //M - 3)

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
    }
}

void print1(int *arr[], int m, int n){

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
    }  
}


void print(vector <int> arr[], int m){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
    }
}

void print(vector <vector <int>> arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = 0; j < arr[i].size(); j++)
            cout<<arr[i][j]<<" ";
    }
}

int main(){

    int arr1[4][2] = {{1,2},
                      {3,4},
                      {5,6},
                      {7,8}};

    print(arr1);

    cout<<"\n";

    print(arr1,4);

    //M - 3) - (C style) double pointers
    int **arr2;
    int m = 3, n = 2;
    arr2 = new int*[m];
    for(int i = 0; i < m; i++)
    {
        arr2[i] = new int[n];
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            arr2[i][j] = i;
        }
    }

    cout<<"\n";

    print(arr2, 3, 2);

    cout<<"\n";

    //M - 4) (C style) array of pointers
    int m1  = 3, n1 =2;
    int *arr3[m1];

    for(int i = 0; i < m1; i++){
        arr3[i] = new int[n1]; 
    }

    for(int i = 0; i < m1; i++){
        for(int j = 0; j < n1; j++){
            arr3[i][j] = i;
        }
    }

    print1(arr3, m1 , n1);

    cout<<"\n";

    //M - 5) (C++ style) array of vectors
    int m2 = 3, n2 = 2;
    vector <int> arr4[m2];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n2; j++)
            arr4[i].push_back(i);
    }

    print(arr4, m2);

    //M - 6) (C++ style) vector of vectors
    int m3 = 3, n3 = 2;
    vector <vector <int>> arr5;
    for(int i = 0; i < m; i++){

        vector <int> v;
        for(int j = 0; j < n2; j++)
            v.push_back(i);
            
        arr5.push_back(v);
    }    

    cout<<"\n";
    print(arr4, m2);

    return 0;
}   