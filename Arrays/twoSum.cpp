// LeetCode - 01 - Two Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> map;
        int i, first, difference;
        for (i=0; i<nums.size(); i++) {
            first = nums[i];
            difference = target-first;
            if (map.find(difference) != map.end()) {
                return {map[difference], i};
            }
            map[first] = i;
        }
        return {-1,-1};
    }
};