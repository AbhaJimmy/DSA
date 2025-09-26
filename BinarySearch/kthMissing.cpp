// LeetCode - 1539 - Kth Missing Positive Number
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size(), low=0, high=n-1, mid, missing;
        while (low <= high) {
            mid = (low+high)/2;
            missing = arr[mid] - (mid+1);
            if (missing < k) low = mid+1;
            else high = mid-1;
        }
        return (k + high + 1);
    }
};