// LeetCode - 136 - Single Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n=nums.size(), xor1=0;
        for (int i=0; i<n; i++) {
            xor1 = xor1 ^ nums[i];
        }
        return xor1;
     }
};