// LeetCode - 75 - Sort Colors
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size(), low=0, mid=0, high=n-1, temp;
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) mid++;
            else {
               swap(nums[high],nums[mid]);
               high--; 
            }
        }
    }
};