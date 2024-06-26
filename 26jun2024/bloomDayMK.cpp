class Solution {
public:
    int function(int mid, vector<int> bloomDay, int k) {
        int cnt = 0;
        int kcnt = 0;
        for (auto it : bloomDay) {
            if (it <= mid) {
                kcnt++;
                if (kcnt == k) {
                    cnt++;
                    kcnt = 0;
                }
            } else {
                kcnt = 0;
            }       
        }
        return cnt;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int mxd = *max_element(bloomDay.begin(), bloomDay.end());
        int low = 1;
        int high = mxd;
        int mid;
        int ans = -1;
        
        if ( (long long)m * k > bloomDay.size()) return ans;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (function(mid, bloomDay, k) >= m) {
                ans = mid;      
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
