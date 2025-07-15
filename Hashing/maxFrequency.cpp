// LeetCode 3005 - Count elements with maximum frequency
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n=nums.size(), i, freq=0, count=0;
        for (i=0; i<n; i++) {
            mpp[nums[i]]++;
        }
        for (auto it : mpp) {
            if (it.second > freq) {
                freq = it.second;
                count = freq;
            }
            else if (it.second==freq) count += it.second;
        }
        return count;
    }
};