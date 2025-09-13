// GFG - Floor in sorted array
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        int n=arr.size(), low=0, high=n-1, ans=-1, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] <= x) {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};
