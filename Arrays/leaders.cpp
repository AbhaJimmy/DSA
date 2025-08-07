// GFG - Array leaders
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> leaders(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size(), maxi=INT_MIN, i=n-1;
        while (i >= 0) {
            if (arr[i] >= maxi) {
                ans.push_back(arr[i]);
                maxi = arr[i];
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};