int BinarySearch (vector<int> arr, int num ){
    int size = arr.size();
    int start =0;
    int end = arr.size()-1;

    while (start <= end ){
        int mid = (start + end )/2;

        if (num == arr[mid] ){
            return mid ;
        }

        else if (num < arr[mid ]){
            end = mid -1 ;
        }

        else {
            start = mid +1;
        }

    }
    return -1;
}


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int index = BinarySearch (nums, target);
        return index;
    }
};