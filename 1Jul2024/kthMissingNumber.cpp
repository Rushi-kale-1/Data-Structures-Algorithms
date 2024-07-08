#include <vector>
using namespace std;

class Solution {
public:
    int floorM(vector<int> arr, int k) {
        int low = 0;
        int high = arr.size() - 1;
        int mid;
        int ans = -1;  // Initialize ans to handle edge cases
        
        while (low <= high) {
            mid = low + (high - low) / 2;
            int miss = arr[mid] - (mid + 1);  // Correct calculation of missing numbers
            
            if (miss < k) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return ans;
    }

    int findKthPositive(vector<int>& arr, int k) {
        int ans = floorM(arr, k);
        
        if (ans == -1) {
            // If ans is -1, k is less than the smallest missing number
            return k;
        }
        
        int miss = arr[ans] - (ans + 1);  // Correct calculation of missing numbers
        return arr[ans] + (k - miss);
    }
};
