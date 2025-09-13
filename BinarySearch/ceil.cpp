// GFG - Ceil in sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int n=arr.size(), low=0, high=n-1, ans=-1, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] >= x) {
                ans = mid;
                high = mid-1;
            }
            else low = mid+1;
        }
        return ans;
    }
};