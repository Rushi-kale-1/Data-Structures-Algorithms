#include <bits/stdc++.h>
using namespace std;

void recursive (int arr[], int i, int j){
    //base case 
   if (i>=j){
    return ;
   }
   swap(arr[i], arr[j]);
   recursive(arr, i+1, j-1);
}

int main (){
    int arr[] = {10,20,30,40};
    recursive(arr, 0, 3);
    for (int a : arr){
        cout <<a<<endl;
    }
}