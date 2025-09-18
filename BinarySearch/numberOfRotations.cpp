// GFG - Find kth Rotation
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int n=arr.size(), low=0, high=n-1, index=-1, mini=INT_MAX, mid;
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[low] <= arr[high]) {
                if (arr[low] < mini) {
                    index = low;
                    mini = arr[low];
                }
            }
            if (arr[low] <= arr[mid]) {
                if (arr[low] < mini) {
                    index = low;
                    mini = arr[low];
                }
                low = mid+1;
            }
            else {
                if (arr[mid] < mini) {
                    index = mid;
                    mini = arr[mid];
                }
                high = mid-1;
            }
        }
        return index;
    }
};