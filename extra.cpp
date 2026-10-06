#include <bits/stdc++.h>
using namespace std;

int myAtoi(int i, int n, int num, string s){
    if(i >= n){
        cout<<"the num is: "<<num<<"\n";
        return num;
    }


    int digit = s[i] - '0';
    // cout<<digit<<"\n";
    num = num*10 + digit;
    // cout<<num<<"\n";
    return myAtoi(i+1, n, num, s);   
}

int main(){
    string s = "2345";
    int n = s.size();
    // cout<<s.size()<<"\n";
    int num = 0;
    int result = myAtoi(0, n, num, s);
    cout<<result<<"\n";
}
