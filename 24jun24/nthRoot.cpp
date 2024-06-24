//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long low = 1;
        long long high =x;
        long long mid ;
        long long int sqrt;
        if (x ==1 || x==2 || x==3) return 1;
        if (x==0) return 0;
        
        while (low<=high) {
            mid = low +(high -low)/2;

            if (mid*mid == x) return mid;
            // go to left 
            if (mid*mid > x) high = mid -1;
            // go to right
            else if (mid*mid < x) {
                low = mid +1;
                sqrt = mid;
            }
        }
        return sqrt;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends