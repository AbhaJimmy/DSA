// GFG - Intersection of Two Sorted Arrays with Duplicate Elements
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> intersection(vector<int>& a, vector<int>& b) {
        vector<int> result;
        int n=a.size(), m=b.size(), i=0, j=0;
        while (i<n && j<m) {
            if (a[i] < b[j]) i++;
            else if (b[j] < a[i]) j++;
            else {
                auto it = find(result.begin(),result.end(),a[i]);
                if (it == result.end()) result.push_back(a[i]);
                i++; 
                j++;
            }
        }
        return result;
    }
};