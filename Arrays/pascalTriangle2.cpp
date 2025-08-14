// LeetCode - 119 - Pascal's Triangle II 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> result;
        long long ans=1;
        result.push_back(1);
        for (int i=1; i<=rowIndex; i++) {
            ans *= (rowIndex-i+1);
            ans /= i;
            result.push_back(ans);
        }
        return result;
    }
};