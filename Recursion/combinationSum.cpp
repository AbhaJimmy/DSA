// LeetCode - 39 - Combination Sum
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void findCombinationSum(int ind, vector<int>& candidates, vector<vector<int>> &result, vector<int>& tempDS, int target, int n) {
        if (ind == n) {
            if (target == 0) result.push_back(tempDS);
            return;
        }
        if (candidates[ind] <= target) {
            tempDS.push_back(candidates[ind]);
            findCombinationSum(ind,candidates,result,tempDS,target-candidates[ind],n);
            tempDS.pop_back();
        }
        findCombinationSum(ind+1,candidates,result,tempDS,target,n);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> tempDS;
        int n = candidates.size();
        findCombinationSum(0,candidates,result,tempDS,target,n);
        return result;
    }
};