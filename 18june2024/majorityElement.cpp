class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int rem ;
        int cnt =0;
        for (auto it:nums){
            if (cnt==0){
                rem = it;
                cnt++;
            }
            else if (it == rem){
                cnt++;
            } else {
                cnt--;
            }
        }
        return rem;
    }
};