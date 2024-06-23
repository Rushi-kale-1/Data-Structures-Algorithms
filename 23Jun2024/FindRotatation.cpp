//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int findKRotation(int nums[], int n) {
	    // code here
	    // edge case
	    if (nums[0]< nums[n-1]) return 0;
	    
	    // search sorted means -> binary search
        // rotated means left / right sorted approach

        int low =0;
        int high = n-1;
        int mid ;
    int mini = INT_MAX;
    int index = -1;
        while (low<=high){
            // below is same as mid = (low+high)/2;
            mid =low +(high-low)/2;
            // left sorted
            if (nums[low]<=nums[mid]){
                // if left part is sorted then nums[low] will be min from left part  
                if (mini > nums[low]){
                    mini = nums[low];
                    index =low;
                }
                // now shift right part
                low = mid+1;
            }
            // Right sorted
            else {
                // if right sorted then nums[mid] will be min from right part
                if (mini > nums[mid]){
                    mini = nums[mid];
                    index =mid;
                }
                // now shift to left part
                high = mid-1;
            }
        }
        return index;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findKRotation(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends