// LeetCode - 260 - Search a 2D matrix II
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int n=matrix.size(), m=matrix[0].size(), row=0, col=m-1;
        while (row < n && col >= 0) {
            if (matrix[row][col] == target) return true;
            else if (matrix[row][col] < target) row++;
            else col--;
        }
        return false;   
    }
};