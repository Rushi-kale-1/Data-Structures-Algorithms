class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if (nums.size()==1) return nums[0];
        if (nums[0]!=nums[1]) return nums[0];
        if (nums[n-1]!=nums[n-2]) return nums[n-1];

        int low = 1;
        int high =n-2;
        int mid ;

        while (low<=high){
            mid = low+ (high-low)/2;
            // searching 
            if (nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];

            // elimination (even,odd)->shift to right 
            //  (odd,even)-> shift to left
            else if ((mid%2==1 && nums[mid-1]==nums[mid]) || (mid%2==0 && nums[mid]==nums[mid+1])){
                // shift to right 
                low = mid+1;
            } else{
                // shift left 
                high =mid-1;
            }
        }
        return -1;
    }
};