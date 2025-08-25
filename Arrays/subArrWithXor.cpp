// GFG - Count subarrays with given xor
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        int n=arr.size();
        long  count=0, xoR=0, prefix;
        unordered_map<int,int> mpp;
        mpp[xoR]++;
        for (int i=0; i<n; i++) {
            xoR ^= arr[i];
            prefix = xoR ^ k;
            count += mpp[prefix];
            mpp[xoR]++;
        } 
        return count;
    }
};