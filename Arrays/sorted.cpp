// GFG - Check if array is sorted
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int n = arr.size();
        for (int i=1; i<n; i++) {
            if (!(arr[i] >= arr[i-1])) return false;
        }
        return true;
    }
};