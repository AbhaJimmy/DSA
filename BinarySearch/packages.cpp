// LeetCode - 1011 - Capacity To Ship Packages Within D Days
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDays(vector<int>& weights, int capacity) {
        int n=weights.size(), days=1, load=0;
        for (int i=0; i<n; i++) {
            if (load + weights[i] > capacity) {
                load = weights[i];
                days++;
            }
            else load += weights[i];
        } 
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (findDays(weights,mid) <= days) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};