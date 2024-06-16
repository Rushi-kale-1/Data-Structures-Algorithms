#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int partition(vector<int> &arr, int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        while (i < j) {
            while (arr[i] <= pivot && i < high) {
                i++;
            }
            while (arr[j] > pivot && j > low) {
                j--;
            }
            if (i < j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);{
    
} // namespace std;
        return j;
    }

    void qs(vector<int> &arr, int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high);
            qs(arr, low, pivot - 1);
            qs(arr, pivot + 1, high);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        qs(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main (){
    Solution s1;
    vector<int> nums = {36,23,8,7,4,9,0,8,87,7,0};
    for (auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
    s1.sortArray(nums);
    for (auto it:nums){
        cout<<it<<" ";
    }
    cout<<endl;
}
