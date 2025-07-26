// Code 360 - Longest Subarray With Sum K
#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int n=a.size(), i=0, j=0, maxLen=0;
    long long sum = a[0];
    while (j < n) {
        while (i<=j && sum > k) {
            sum -= a[i];
            i++;
        }
        if (sum == k) maxLen = max(maxLen, j-i+1);
        j++;
        sum += a[j];
    }
    return maxLen;
}