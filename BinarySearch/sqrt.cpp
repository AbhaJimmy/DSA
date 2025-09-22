// LeetCode - 69 - Sqrt(x)
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int mySqrt(int x) {
        int low=1, high=x/2, mid, ans=x;
        while (low <= high) {
            mid = (low+high)/2;
            if (mid <= x/mid) {
                ans = mid;
                low = mid+1;
            }
            else high = mid-1;
        }
        return ans;
    }
};