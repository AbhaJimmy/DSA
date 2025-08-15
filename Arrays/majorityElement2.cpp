// LeetCode - 229 - Majority Element II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size(), count1=0, elem1=INT_MIN, count2=0, elem2=INT_MIN, mini=(n/3)+1;
        if (n < 2) return nums;
        for (int i=0; i<n; i++) {
            if (count1==0 && nums[i] != elem2) {
                count1 = 1;
                elem1 = nums[i];
            }
            else if (count2==0 && nums[i] != elem1) {
                count2 = 1;
                elem2 = nums[i];
            }
            else if (nums[i]==elem1) count1++;
            else if (nums[i]==elem2) count2++;
            else {
                count1--;
                count2--;
            }
        }
        vector<int> result;
        count1=0, count2=0;
        for (int i=0; i<n; i++) {
            if (nums[i]==elem1) count1++;
            if (nums[i]==elem2) count2++;
        }
        if (count1 >= mini) result.push_back(elem1);
        if (count2 >= mini) result.push_back(elem2);
        return result;
    }
};