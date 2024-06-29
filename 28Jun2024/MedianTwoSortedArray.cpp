#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> totalnums;

        for (auto it : nums1){
            totalnums.push_back(it);
        }
        for (auto it : nums2){
            totalnums.push_back(it);
        }
        sort(totalnums.begin(),totalnums.end());
		
        // even
        if (totalnums.size()%2==0){
            int index =( totalnums.size()/2) -1;
            double ans = (double)(totalnums[index]+totalnums[index+1])/2;
            return ans;
        }
		//odd
        int index = floor(totalnums.size()/2);
        return (double)totalnums[index];
    }
};

int main(){

	Solution s1;
	vector<int> v1 = {1,2};
	vector<int> v2 ={3,4};
	cout<<s1.findMedianSortedArrays(v1, v2);
}