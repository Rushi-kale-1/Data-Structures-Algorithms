class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if (nums.size()==1) return 0;
        if (nums[0]>nums[1]) return 0;
        if (nums[n-1]>nums[n-2]) return n-1;

        int low = 1;
        int high = n-2;
        int mid ;

        while (low<=high){
            mid = low +(high-low)/2;

            if (nums[mid-1]<nums[mid] && nums[mid]>nums[mid+1]) return mid;

            // mid is at increasing order -> shift to right
            else if ( nums[mid-1]<nums[mid]) low = mid+1;

            // mid is at decreasing order -> shift to left
            else {
                high =mid-1;
            }
        }
        return -1;
    }
};