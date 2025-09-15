// GFG - Number of Occurrence
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int lowerBound(vector<int>& arr, int n, int target) {
        int low=0, high=n-1, mid, result=n;
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] >= target) {
                result = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return result;
    }
    int upperBound(vector<int>& arr, int n, int target) {
        int low=0, high=n-1, mid, result=n;
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] > target) {
                result = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return result-1;
    }
    int countFreq(vector<int>& arr, int target) {
        int n=arr.size(), first, last;
        first = lowerBound(arr,n,target);
        if (first == n || arr[first] != target) return 0;
        last = upperBound(arr,n,target);
        return (last-first+1);
    }
};