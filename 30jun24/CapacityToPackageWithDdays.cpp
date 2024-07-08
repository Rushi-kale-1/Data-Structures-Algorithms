class Solution {
public:
    int capiDay(vector<int> weights, int mid) {
        long long sum = 0;
        int cntDays = 1; // Initialize to 1 since we start counting from the first day

        for (auto it = weights.begin(); it != weights.end(); it++) {
            sum += *it;

            if (sum > mid) {
                cntDays++;
                sum = *it;
            }
        }

        return cntDays;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0); // Using accumulate to calculate sum
        int mid;
        int ans ;
        while (low <= high) {
            mid = low + (high - low) / 2;

            if (capiDay(weights, mid) <= days) {
                high = mid-1;
                ans = mid ;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};