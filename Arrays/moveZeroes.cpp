// LeetCode - 283 - Move Zeroes
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size(), j=-1, temp;
        for (int i=0; i<n; i++) {
            if (nums[i] == 0) {
                j=i; 
                break;
            }
        }
        if (j == -1) return;
        for (int i=(j+1); i<n; ++i) {
            if (nums[i] != 0) {
                nums[j] = nums[i];
                nums[i] = 0;
                j++;
            }
        }
    }
};