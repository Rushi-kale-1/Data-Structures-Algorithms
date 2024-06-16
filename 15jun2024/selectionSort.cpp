#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr){
    int n=arr.size();
    for (int i=0; i<n-1; i++){
        auto mini = min_element(arr.begin()+i, arr.end());
        
        swap (arr[i],*mini);
        
    }
}
int main(){
    vector<int> arr ={1,4,2,60,2,9};
    selectionSort(arr);
    for (auto it:arr){
        cout<<it<<endl;
    }
}