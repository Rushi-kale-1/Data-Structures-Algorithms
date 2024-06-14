#include <bits/stdc++.h>
using namespace std;

int recursive (int n,int fact){
    //base case 
   if (fact>n){
    return 0;
   }
   return n * recursive(n+1,fact * (n));
}

int main (){
    cout<<recursive(10,1);
}