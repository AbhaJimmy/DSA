// LeetCode - 153 - Find minimum in Rotated Sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(), mini=INT_MAX, low=0, high=n-1, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (nums[low] <= nums[mid]) {
                mini = min(mini,nums[low]);
                low = mid+1;
            }
            else {
                mini = min(mini,nums[mid]);
                high = mid-1;
            }
        }
        return mini;
    }
};