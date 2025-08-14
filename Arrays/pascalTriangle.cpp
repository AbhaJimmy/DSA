// LeetCode - 118 - Pascal's Triangle
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> generateRow(int row) {
        vector<int> temp;
        temp.push_back(1);
        int ans=1;
        for (int i=1; i<row; i++) {
            ans *= (row-i);
            ans /= i;
            temp.push_back(ans);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        for (int i=1; i<=numRows; i++) {
            result.push_back(generateRow(i));
        }
        return result;
    }
};