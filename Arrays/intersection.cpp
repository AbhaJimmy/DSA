// LeetCode - 349 - Intersection of two arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st(nums1.begin(),nums1.end());
        unordered_set<int> result;
        for (int it : nums2) {
            if (st.find(it) != st.end()) {
                result.insert(it);
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};