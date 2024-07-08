/*
1552. Magnetic Force Between Two Balls

In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

Given the integer array position and the integer m. Return the required force.

*/

class Solution {
public:
    bool possible (vector<int> position, int m, int mid){
        int magCnt =1; 
        int last = position[0];
        for (int i=1; i<position.size();i++){
            if (position[i]-last>=mid) {
                magCnt++;
                last=position[i];
            }
            if (magCnt >=m) return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort (position.begin(),position.end());
        int n = position.size();
        int low =1;
        int high = position[n-1]-position[0];
        int mid;
        while (low <= high) {
            mid = low + (high-low)/2;
            if (possible (position,m,mid)) low  = mid+1;
            else {
                high = mid -1;
            }
        }
        return high ;
    }
};