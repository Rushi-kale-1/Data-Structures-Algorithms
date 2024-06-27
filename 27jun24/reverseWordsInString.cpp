
class Solution {
public:
    string reverseWords(string s) {
        s.push_back(' ');
        string ans ="";
        vector<string> vect;
        string temp="";
        for(auto str :s){
            if(str==' '){
                vect.push_back(temp);
                temp="";
            }
            else {
                temp.push_back(str);
            }
        }
        reverse(vect.begin(),vect.end());
        for(auto str:vect){
            if (!str.empty()){
                ans += str;
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
        
    }
};