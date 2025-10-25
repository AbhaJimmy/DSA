// LeetCode - 1482 - Minimum Number of Days to Make m Bouquets
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        long long val = m * 1ll * k * 1ll;
        if (val > n) return -1;
        int mini = INT_MAX, maxi = INT_MIN;
        int low = mini, high = maxi;
    }
};