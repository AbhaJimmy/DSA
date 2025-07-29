// LeetCode - 01 - Two Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size(), num, difference;
        for (int i=0; i<n; i++) {
            num = nums[i];
            difference = target - num;
            if (mpp.find(difference) != mpp.end()) {
                return {mpp[difference], i};
            }
            mpp[num] = i;
        }
        return {-1,-1};
    }
};