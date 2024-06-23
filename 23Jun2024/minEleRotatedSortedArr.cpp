class Solution {
public:
    int findMin(vector<int>& nums) {
        // search sorted means -> binary search
        // rotated means left / right sorted approach

        int low =0;
        int high = nums.size()-1;
        int mid ;
    int mini = INT_MAX;
        while (low<=high){
            // below is same as mid = (low+high)/2;
            mid =low +(high-low)/2;
            // left sorted
            if (nums[low]<=nums[mid]){
                // if left part is sorted then nums[low] will be min from left part  
                mini = min (mini, nums[low]);
                // now shift right part
                low = mid+1;
            }
            // Right sorted
            else {
                // if right sorted then nums[mid] will be min from right part
                mini = min (nums[mid],mini);
                // now shift to left part
                high = mid-1;
            }
        }
        return mini;
    }
};