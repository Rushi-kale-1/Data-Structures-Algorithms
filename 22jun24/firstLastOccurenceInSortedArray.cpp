class Solution {
public:
    // Find the smallest index with a value greater than or equal to x
    int findCeilIndex(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1; // Initialize with -1 to handle edge cases
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= x) {
                ans = mid;
                high = mid - 1; // Move left to find the smallest index
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    // Find the largest index with a value less than or equal to x
    int findFloorIndex(vector<int>& nums, int x) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1; // Initialize with -1 to handle edge cases
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] <= x) {
                ans = mid;
                low = mid + 1; // Move right to find the largest index
            } else {
                high = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int firstPos = findCeilIndex(nums, target);
        if (firstPos == -1 || nums[firstPos] != target) {
            return {-1, -1}; // Target not found
        }
        int lastPos = findFloorIndex(nums, target);
        return {firstPos, lastPos};
    }
};
