// LeetCode - 1482 - Minimum Number of Days to Make m Bouquets
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool possible(vector<int>& bloomDay, int day, int m, int k) {
        int n=bloomDay.size(), ans=0, count=0;
        for (int i=0; i<n; i++) {
            if (bloomDay[i] <= day) count++;
            else {
                ans += (count / k);
                count = 0;
            }
        }
        ans += count / k;
        return (ans >= m);
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long flowers = m * 1ll * k * 1ll;
        if (flowers > n) return -1;
        int mini=INT_MAX, maxi=INT_MIN;
        for (int i=0; i<n; i++) {
            mini = min(bloomDay[i],mini);
            maxi = max(bloomDay[i],maxi);
        }
        int low = mini, high = maxi, mid;
        while (low <= high) {
            mid = (low + high) / 2;
            if (possible(bloomDay,mid,m,k)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};