//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


#include <math.h>
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    int low =1;
	    int high = m;
	    int mid;
	    
	    while (low<=high){
	        mid = low + (high -low)/2;
	        if (pow(mid,n) == m) return mid;
	        
	        if (pow(mid,n)> m) high = mid-1;
	        else {
	            low =mid+1;
	        }
	    }
	    return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends