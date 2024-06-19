class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int mx = 0;
        int mini = prices[0];

        for (int i=1; i<prices.size();i++){
             
            profit = prices[i]- mini;
            if (profit>0) mx = max(mx, profit);
            if (prices[i]<mini) mini = prices[i];
        }
        return mx;
    }
};