class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        int index=-1;
        string s="";
        for(int i=n-1;i>=0;i--){
            if(num[i]%2!=0){
                index=i;
                break;
            }
        }
        if(index==-1){
            return s;
        }
        for(int i=0; i<=index;i++){
            s.push_back(num[i]);
        }
        return s;
        
    }
};