class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rl =0;
        int rr =matrix[0].size()-1;
        int ct = 0;
        int cb = matrix.size()-1;

        vector<int> ans;

        while (ct<=cb && rl<=rr) {
            for (int i= rl ; i<=rr; i++){
                ans.push_back(matrix[ct][i]);
            }
            ct++;
            
            for (int i=ct;i<=cb;i++){
                ans.push_back(matrix[i][rr]);
            }
            rr--;
            if (ct<=cb){for (int i=rr;i>=rl;i--){
                ans.push_back(matrix[cb][i]);
            }
            cb--;}
            if (rr>=rl){
                for (int i=cb;i>=ct;i--){
                    ans.push_back(matrix[i][rl]);
                }
            rl++;}
        }
        return ans;
    }
};