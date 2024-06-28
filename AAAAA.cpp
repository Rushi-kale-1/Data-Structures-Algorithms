#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void nStarTriangle(int n) {
    // Write your code here.
    bool bo =1;
    int star =1;
    for (int i=1 ; i<=n; i++){
        for (int j =1; j<=n-i;j++){
            cout<<" ";
        }
        for (int j=1; j<=star; j++){
            cout<<bo;
            bo = !bo;
        }
        cout<<endl;
        star+=2;
    }
}
int main (){
   string concatenated = "wrererers";
        size_t pos = concatenated.find('s') != string::npos; 
   cout <<pos;
}