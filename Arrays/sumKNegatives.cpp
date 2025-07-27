// GFG - Longest Subarray with Sum K (including negatives and zeroes)
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n=arr.size(), sum=0, maxLen=0, len=0, rem;
        map<int,int> prefixSum;
        for (int i=0; i<n; i++) {
            sum += arr[i];
            if (sum == k) {
                maxLen = max(maxLen, i+1);
            }
            rem = sum - k;
            if (prefixSum.find(rem) != prefixSum.end()) {
                len = i - prefixSum[rem];
                maxLen = max(maxLen, len);
            }
            if (prefixSum.find(sum) == prefixSum.end()) {
                prefixSum[sum] = i;
            }
        }
        return maxLen;
    }
};