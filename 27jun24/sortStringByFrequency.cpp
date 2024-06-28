#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
   // to store frquency of each char in map
    string frequencySort(string s) {
        map<char,int> mp;
        for (char p: s){
            mp[p]++;
        }

        //copy that map into vector pair
        vector<pair<char,int>> vecmap(mp.begin(),mp.end());

        // sort vector pair according to second value of pair (ie., frequency)
        sort(vecmap.begin(),vecmap.end(),[&](const pair<char, int>& a, const pair<char, int>& b){
            return a.second>b.second;
        });
        // ans string
        string ans;
        
        //traversing through vector pair and adding chars to ans string 
        for (auto it : vecmap){
            for (int i=1; i<=it.second;i++){
                ans+=it.first;
            }
        }
        return ans;
    }
};
int main (){
    Solution s1;
    cout<<s1.frequencySort("jvjhjexrydiownemxaerkjirchgoedriueruioiesexrhjbjcrhhmcmh")<<endl;
}