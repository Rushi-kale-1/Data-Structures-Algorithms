class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // Use a set to handle duplicates and provide O(1) average time complexity for lookups.
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longestStreak = 0;

        for (int num : numSet) {
            // Only start a sequence from numbers that are not preceded by any other number.
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Count the length of the current sequence.
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                // Update the longest streak found.
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
