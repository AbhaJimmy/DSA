// LeetCode - 560 - Subarray sum equals K
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(), count=0, prefixSum=0, remove;
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        for (int i=0; i<n; i++) {
            prefixSum += nums[i];
            remove = prefixSum - k;
            count += mpp[remove];
            mpp[prefixSum] += 1;
        }
        return count;
    }
};