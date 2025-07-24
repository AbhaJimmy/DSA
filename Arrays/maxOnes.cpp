// LeetCode - 485 - Max Consecutive Ones
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left=0, right=0, n=nums.size(), count=0;
        while (right < n) {
            if (nums[right] == 1) 
                count = max(count,(right-left+1));
            else 
                left = right+1;
            right++;
        }
        return count;
    }
};