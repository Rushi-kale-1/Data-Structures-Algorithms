class Solution {
public:
    int divSum (vector<int> nums, int mid){
        int sum =0;
        for (auto it : nums){
            sum+= ceil ((double)it / (double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1;
        int high = *max_element (nums.begin(),nums.end());
        int mid; int ans;
        while (low<=high){
            mid = low +(high-low)/2;

            if (divSum(nums, mid) <=threshold){
                high = mid -1;
                ans =mid;
                
            } else {
                    low = mid +1;
                    }
        }
        return ans;
    }
};