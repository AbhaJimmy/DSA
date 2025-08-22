// GFG - Largest subarray with sum 0
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxLength(vector<int>& arr) {
        int n=arr.size(), sum=0, maxLen=0;
        unordered_map<int,int> mpp;
        for (int i=0; i<n; i++) {
            sum += arr[i];
            if (sum==0) maxLen = i+1;
            else {
                if (mpp.find(sum) != mpp.end()) {
                    maxLen = max(maxLen,i-mpp[sum]);
                }
                else {
                    mpp[sum] = i;
                }
            }
        }
        return maxLen;
    }
};