#include <bits/stdc++.h>
using namespace std;

void bubblesort (vector<int> &arr){
    int n= arr.size();
    int i=0;
    int j=1;
    int cnt =0;
    while (cnt<=n-1){
        if (arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i+=1;
            j+=1;
        } 
        
        else if (j>=n-1){
            cnt+=1;
            i=0;
            j=1;
        }
        else {
            i++;
            j++;
        }
    }
}


void insertion(vector<int> &arr){
    int mc = 1;
    int sc = 0;
    int sn = mc;
    while (mc<arr.size()){

        while (sc>=0){
            if (arr[sn]<arr[sc]){
                swap (arr[sn],arr[sc]);
                sn =sc;
            }
            sc--;
        }
        mc++;
    }
}


int main(){
    vector<int> arr ={1,4,2,60,2,9};
    insertion(arr);
    for (auto it:arr){
        cout<<it<<endl;
    }
}