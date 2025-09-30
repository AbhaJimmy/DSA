// LeetCode - 04 - Median of Two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
                int n1=nums1.size(), n2=nums2.size(), n=n1+n2, left=(n1+n2+1)/2, low=0, high=n1, mid1, mid2, l1, l2, r1, r2;
        if (n1 == 0) {
            if (n2 == 1) return nums2[0];
            if (n2%2 == 1) return nums2[n2/2];
            return ((double)(nums2[n2/2] + nums2[n2/2 - 1])) / 2.0;
        }
        if (n2 == 0) {
            if (n1 == 1) return nums1[0];
            if (n1%2 == 1) return nums1[n1/2];
            return ((double)(nums1[n1/2] + nums1[n1/2 - 1])) / 2.0;
        }
        while (low <= high) {
            mid1 = (low + high) >> 1;
            mid2 = left - mid1;
            l1 = INT_MIN;
            l2 = INT_MIN;
            r1 = INT_MAX;
            r2 = INT_MAX;
            if (mid1 < n1) r1 = nums1[mid1];
            if (mid2 < n2) r2 = nums2[mid2];
            if (mid1 - 1 >= 0) l1 = nums1[mid1-1];
            if (mid2 - 1 >= 0) l2 = nums2[mid2-1];
            if (l1 <= r2 && l2 <= r1) {
                if (n%2 == 1) return max(l1,l2);
                else return ((double)(max(l1,l2) + min(r1,r2))) / 2.0;
            }
            else if (l1 > r2) high = mid1-1;
            else low = mid1+1;
        }
        return 0;
    }
};