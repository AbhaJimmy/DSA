// LeetCode - 34 - Find first and last position of element in sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstPosition(vector<int>& nums, int target, int n) {
        int low=0, high=n-1, first=-1, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (nums[mid] == target) {
                first = mid;
                high = mid-1;
            }
            else if (nums[mid] < target) low = mid+1;
            else high = mid-1;
        }
        return first;
    }
    int lastPosition(vector<int>& nums, int target, int n) {
        int low=0, high=n-1, last=-1, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (nums[mid] == target) {
                last = mid;
                low = mid+1;
            }
            else if (nums[mid] < target) low = mid+1;
            else high = mid-1;
        }
        return last;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size(), first, last;
        first = firstPosition(nums,target,n);
        if (first == -1) return {-1,-1};
        last = lastPosition(nums,target,n);
        return {first,last};
    }
};