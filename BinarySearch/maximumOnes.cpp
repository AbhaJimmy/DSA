// LeetCode - 2643 - Row with maximum ones
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lowerBound(vector<int>& row, int m, int x) {
        int low=0, high=m-1, ans=m;
        sort(row.begin(),row.end());
        while (low <= high) {
            int mid = (low + high) / 2;
            if (row[mid] >= x) {
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size(), count, countMax=0, index=0;
        for (int i=0; i<n; i++) {
            count = m - lowerBound(mat[i],m,1);;
            if (count > countMax) {
                countMax = count;
                index = i;
            }
            else if (count == countMax && i < index) 
                index = i;
        }
        return {index,countMax};
    }
};