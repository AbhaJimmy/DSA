// LeetCode - 1283 - Find the smallest divisor given a threshold
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMax(vector<int>& nums, int n) {
        int maxi=INT_MIN;
        for (int i=0; i<n; i++) {
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
    int findSum(vector<int>& nums, int mid, int n) {
        int sum = 0;
        for (int i=0; i<n; i++) {
            sum += ceil(double(nums[i])/double(mid));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
     int n=nums.size(), low=1, high=findMax(nums,n), mid, sum;
     while (low <= high) {
        mid = (low+high)/2;
        sum = findSum(nums,mid,n);
        if (sum <= threshold) high = mid-1;
        else low = mid+1;
     }   
     return low;
    }
};