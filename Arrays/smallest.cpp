// GFG - First and Second Smallests
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        int n=arr.size(), i, small=arr[0], secSmall=INT_MAX;
        for (i=0; i<n; i++) {
            if (arr[i] < small) {
                secSmall = small;
                small = arr[i];
            }
            else if ((arr[i] < secSmall) && (arr[i] > small)) secSmall = arr[i];
        }
        if (secSmall==INT_MAX) return {-1};
        return {small,secSmall};
    }
};