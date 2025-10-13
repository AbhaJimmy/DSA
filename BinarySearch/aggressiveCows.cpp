// GFG - Aggressive Cows
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool canWePlace(vector<int> &stalls, int dist, int cows) {
        int n=stalls.size(), count=1, last=stalls[0];
        for (int i=1; i<n; i++) {
            return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        int n = stalls.size(), low = 1, high = stalls[n-1] - stalls[0];      
        sort(stalls.begin(),stalls.end());
        return high;
    }
};