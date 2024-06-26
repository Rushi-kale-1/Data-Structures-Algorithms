class Solution {
public:
    long long timetaken(const vector<int>& piles, int speed) {
        long long time = 0;  // Change to long long to handle large sums
        for (int pile : piles) {
            time += (pile + speed - 1) / speed; // Equivalent to ceil(pile / speed)
        }
        return time;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int mid;
        int ans = high;  // Initialize ans to high as a worst-case scenario

        while (low <= high) {
            mid = low + (high - low) / 2;
            long long time = timetaken(piles, mid);  // Use the corrected timetaken function
            if (time > h) {
                low = mid + 1;
            } else {
                high = mid - 1;
                ans = mid;  // Update ans with the current mid value
            }
        }
        return ans;
    }
};
