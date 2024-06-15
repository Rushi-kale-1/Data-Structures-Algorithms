#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int high, int mid) {
    vector<int> ans;
    int left = low;
    int right = mid + 1;

    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            ans.push_back(arr[left]);
            left++;
        } else {
            ans.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        ans.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        ans.push_back(arr[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        arr[i] = ans[i - low];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low >= high) {
        return;
    }
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, high, mid);
}

int main() {
    vector<int> arr = {1, 5, 2, 9, 6, 2};
    mergeSort(arr, 0, arr.size() - 1);
    for (auto it : arr) {
        cout << it << endl;
    }
    return 0;
}
