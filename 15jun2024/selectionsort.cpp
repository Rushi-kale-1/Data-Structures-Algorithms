#include <bits/stdc++.h>
using namespace std;

int selection (int arr[]){
    int i =0;
    int j =1;
    int n = 4;
    while (j<n){
        swap( arr[i],*min_element(arr+j, arr+n));
        i+=1;
        j+=1;
    }
    
}

int main (){
    int arr[]= {173,392, 26,391};
    selection(arr);
    for (int i =0; i<4; i++){
        cout <<arr[i]<<endl;
    }
}