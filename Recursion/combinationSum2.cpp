// LeetCode - 40 - Combination II 
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombinationSum2(int ind, vector<int> &candidates, vector<vector<int>> &result, vector<int> &tempDS, int target, int n) {
        if (target == 0) {
            result.push_back(tempDS);
            return;
        } 
        for (int i=ind; i<n; i++) {
            if (i>ind && candidates[i]==candidates[i-1]) continue;
            if (candidates[i] > target) break;
            tempDS.push_back(candidates[i]);
            findCombinationSum2(i+1,candidates,result,tempDS,target-candidates[i],n);
            tempDS.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> tempDS;
        int n = candidates.size();
        findCombinationSum2(0,candidates,result,tempDS,target,n);
        return result;
    }
};