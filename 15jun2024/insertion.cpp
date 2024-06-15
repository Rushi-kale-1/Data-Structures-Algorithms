#include <bits/stdc++.h>
using namespace std;
void insertion (int arr[],int n){
    for (int i=0; i<n; i++){
        int j=i;
        while (j>0 && arr[j]<arr[j-1]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}

int main(){
    int arr[]= {1,5,2,8,2,9,2};
    insertion(arr,7);
    for (int i=0; i<7; i++){
        cout<<arr[i]<<endl;
    }
}