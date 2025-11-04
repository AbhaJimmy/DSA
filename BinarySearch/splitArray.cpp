// LeetCode - 410 - Split Array Largest Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarrays(vector<int>& nums, int k, int limit) {
        int n=nums.size(), arrays=1, sum=0;
        for (int i=0; i<n; i++) {
            if (sum + nums[i] <= limit) sum += nums[i];
            else {
                arrays++;
                sum = nums[i];
            }
        }
        return arrays;
    }
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        if (k > n) return -1;
        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (subarrays(nums,k,mid) <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};  