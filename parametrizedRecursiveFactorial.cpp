#include <bits/stdc++.h>
using namespace std;

int recursive (int n){
    //base case 
   if (n==0){
    return 0;
   }
   return n+ recursive(n-1);
}

int main (){
    cout<<recursive(10);
}