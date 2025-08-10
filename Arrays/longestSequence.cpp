// LeetCode - 128 - Longest Consecutive Sequence
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if (n==0) return 0;
        int largest=1, first;
        unordered_set<int> st;
        for (auto it : nums) {
            st.insert(it);
        }
        for (auto it : st) {
            if (st.find(it-1) == st.end()) {
                int count=1;
                first = it;
                while (st.find(first+1) != st.end()) {
                    first += 1;
                    count += 1;
                }
                largest = max(largest,count);
            }
        }
        return largest;
    }
};