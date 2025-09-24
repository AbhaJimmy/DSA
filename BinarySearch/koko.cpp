// LeetCode - 875 - Koko eating bananas
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalHours(vector<int>& piles, int hours, int n) {
        long long sum = 0;
        for (int i=0; i<n; i++) {
            long long pile = piles[i];
            sum += ceil((double)pile/(double)hours);
        }
        return sum;
    }
    int maxElement(vector<int>& piles, int n) {
        int maxi = INT_MIN;
        for (int i=0; i<n; i++) maxi = max(maxi,piles[i]);
        return maxi;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size(), low=1, high=maxElement(piles,n), mid, hours;
        while (low <= high) {
            mid = (low+high)/2;
            hours = totalHours(piles,mid,n);
            if (hours <= h) high = mid-1;
            else low = mid+1;
        }
        return low;
    }
};