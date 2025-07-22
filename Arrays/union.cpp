// GFG - Union of 2 Sorted Arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        vector<int> result;
        int n=a.size(), m=b.size(), i=0, j=0;
        while (i<n && j<m) {
            if (a[i] <= b[j]) {
                if (result.size()==0 || result.back() != a[i]) 
                    result.push_back(a[i]);
                i++;
            }
            else {
                if (result.size()==0 || result.back() != b[j]) 
                    result.push_back(b[j]);
                j++;
            }
        }
        while (i<n) {
            if (result.size()==0 || result.back() != a[i]) 
                result.push_back(a[i]);
            i++;
        }
        while (j<m) {
            if (result.size()==0 || result.back() != b[j]) 
                result.push_back(b[j]);
            j++;
        }
        return result;
    }
};