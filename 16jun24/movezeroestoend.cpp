#include<bits/stdc++.h>
using namespace std;
class solution {

    public:
    void moveZero(vector<int> &nums){
        int j=0;
        for (int i=0; i<nums.size();i++){
            if (nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};

int main(){
    vector<int> nums ={2,4,3,2,4,0,0,5,2,1,0,0,0,6,7,9};
    solution s1;
    s1.moveZero(nums);
    for (auto it: nums){
        cout<<it <<" ";
    }
}