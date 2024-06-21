//{ Driver Code Starts

#include <bits/stdc++.h>

using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        auto ans = getFloorAndCeil(arr, n, x);
        cout << ans.first << " " << ans.second << "\n";
    }
    return 0;
}

// } Driver Code Ends


pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    // code here
    sort(arr,arr+n);
    
    int low=0;
    int high =n-1;
    
    int mid;
    int ans =-1;
    int ans1 =-1;
    
    // code for ceil / lower bound
    while (low<=high){
        mid = low +(high-low)/2;
        if (arr[mid]>=x){
            ans =mid;
            high = mid-1;
        }
        else {
            low =mid+1;
        }
    }
    
    
    // code for floor / higher bound
    low =0;
    high =n-1;
    while (low<=high){
        mid = low +(high-low)/2;
        if (arr[mid]<=x){
            ans1 =mid;
            low =mid+1;
        }
        else {
            high = mid-1;
        }
    }
    
    
    
    pair<int,int> temp;
    temp.first = arr[ans1];
    temp.second = arr[ans];
    
    if (x<arr[0]){
        temp.first =-1;
    } 
    if (x>arr[n-1]){
        temp.second =-1;
    }
    return temp;
}