// LeetCode - 15 - 3Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        int n=nums.size(), j, k,sum=0;
        for (int i=0; i<n; i++) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            j = i+1; 
            k = n-1;
            while (j < k) {
                sum = nums[i] + nums[j] + nums [k];
                if (sum < 0) j++;
                else if (sum > 0) k--;
                else {
                    vector<int> temp = {nums[i], nums[j], nums[k]};
                    result.push_back(temp);
                    j++;
                    k--;
                    while(j<k && nums[j] == nums[j-1]) j++; 
                    while(j<k && nums[k] == nums[k+1]) k--; 
                }
            }
        }
        return result;
    }
};