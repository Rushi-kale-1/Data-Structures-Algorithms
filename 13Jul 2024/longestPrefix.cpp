// solution number 1

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        int n = 0;
        while (n<strs[0].size()){
        bool add=true;
        char comp= strs[0][n];
        for (auto s:strs){
            if (comp!=s[n]) add = false ;
        }
        if(add == true) ans+=comp;
        else return ans;
        n++;
        }
        return ans;
    }
};

// solution using find()

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // using find()

        string prefix = strs[0];
        for (auto s:strs){
            while (s.find(prefix)!=0){
                prefix =prefix.substr(0,prefix.length()-1);
            }
        }
        return prefix;
    }
};