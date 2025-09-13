// LeetCode - 35 - Search Insert Position
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(), low = 0, high = n-1, mid, ans=n;
        while (low <= high) {
            mid = (low+high)/2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid-1;
            } 
            else low = mid+1;
        }
        return ans;
    }
};