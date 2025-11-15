// LeetCode - 1901 - Find a Peak Element II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMaxElement(vector<vector<int>>& mat, int n, int m, int col) {
        int maxValue = -1, index=-1;
        for (int i=0; i<n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = i;
            }
        }
        return index;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n=mat.size(), m=mat[0].size(), low=0, high=m-1;
        while (low <= high) {
            int mid = (low + high) / 2;
            int row = findMaxElement(mat,n,m,mid);
            int left = (mid - 1) >= 0 ? mat[row][mid-1] : -1;
            int right = (mid + 1) < m ? mat[row][mid+1] : -1;
            if (mat[row][mid] > left && mat[row][mid] > right)
                return {row,mid};
            else if (mat[row][mid] > left) low = mid + 1;
            else high = mid - 1;
        }
        return {-1,-1};
    }
};