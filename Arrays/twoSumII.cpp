// LeetCode - 167 - Two Sum II - Input array is sorted
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size(),i=0,j=n-1;
        vector<int> ans;
        while (i < j) {
            if ((numbers[i]+numbers[j]) > target) j--;
            else if ((numbers[i]+numbers[j]) < target) i++;
            else{
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
        }
        return ans;
    }
};