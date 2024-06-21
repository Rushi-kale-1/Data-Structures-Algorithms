class Solution {
public:
    vector<int> row1 (int row){
        vector <int> temp;
        int ans=1;
        temp.push_back(1);
        for (int col=1; col<row;col++){
            ans = ans* (row-col);
            ans = ans / col;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int row=1; row<=numRows;row++){
            ans.push_back(row1(row));
        }
        return ans;
    }
    
};