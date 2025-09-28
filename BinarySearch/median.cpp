// LeetCode - 04 - Median of Two Sorted Arrays
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size(), n2=nums2.size(), i=0, j=0, n=(n1+n2), ind2=n/2, ind1=ind2-1, count=0, elem1=-1, elem2=-1;
        while (i<n1 && j<n2) {
            if (nums1[i] < nums2[j]) {
                if (count == ind1) elem1 = nums1[i];
                if (count == ind2) elem2 = nums1[i];
                count++;
                i++;
            }
            else {
                if (count == ind1) elem1 = nums2[j];
                if (count == ind2) elem2 = nums2[j];
                count++;
                j++;
            }
        }
        while (i < n1) {
            if (count == ind1) elem1 = nums1[i];
            if (count == ind2) elem2 = nums1[i];
            count++;
            i++;
        }
        while (j < n2) {
            if (count == ind1) elem1 = nums2[j];
            if (count == ind2) elem2 = nums2[j];
            count++;
            j++;
        }
        if (n%2 == 1) return elem2;
        return (double)((double)(elem1+elem2))/2.00;
    }
};