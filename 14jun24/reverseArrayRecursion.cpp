#include <bits/stdc++.h>
using namespace std;

bool recursive (int arr[], int i, int j){
    //base case 
   if (i>=j){
    return true ;
   }
   if (arr[i]!=arr[j]){
    return false;
   }
   recursive(arr, i+1, j-1);
}

int main (){
    int arr[] = {10,20,20,10};
    cout<<recursive(arr, 0, 3)<<endl;
    
}