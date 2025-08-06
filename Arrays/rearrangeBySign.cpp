// LeetCode - 2149 - Rearrange array elements by sign
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size(), negtv=1, postv=0;
        vector<int> result(n,0);
        for (int i=0; i<n; i++) {
            if (nums[i] < 0) {
                result[negtv] = nums[i];
                negtv += 2;
            }
            else {
                result[postv] = nums[i];
                postv += 2;
            }
        }
        return result;
    }
};