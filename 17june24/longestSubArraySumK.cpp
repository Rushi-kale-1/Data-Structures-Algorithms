#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        unordered_map<int,int> mp;
        int presum =0;
        int maxi =0;
        for(int i=0; i<N;i++){
            presum+=A[i];
            
            if (presum ==K){
                maxi=max(maxi, i+1);
            }
            int x = presum -K;
            if (mp.find(x)!=mp.end()){
                maxi = max(maxi, i-mp[x]);
            }
            if (mp.find(presum) == mp.end()) {
                mp[presum] = i;
            }
        }
        return maxi;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends