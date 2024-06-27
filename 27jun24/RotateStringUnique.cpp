#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> strTno(string s){
        vector<int> ans ;
        for (char p: s){
            ans.push_back(p-'a');
        }
        return ans ;
    };
    
    bool rotateString(string s, string goal) {
        if (s.length()!=goal.length()) return false;
        vector<int> str =strTno(s);
        vector<int> gstr=strTno(goal);
        int index =-1;
        for (int i=0 ; i<str.size();i++){
            if (str[0]==gstr[i]) index = i;
        }
        reverse(gstr.begin(),gstr.begin()+index);
        reverse (gstr.begin()+index,gstr.end());
        reverse (gstr.begin(),gstr.end());
        for (int i=0; i<str.size();i++){
            cout<< str[i]<< "  "<<gstr[i]<<endl;
        }

        for (int i=0; i<str.size();i++){
            if (str[i]!=gstr[i]) return false;
        }
            return true;
    }
};

int main (){
    Solution s1;
    cout<< s1.rotateString("abcde","deabc");
}