// GFG - Allocate Minimum Pages
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int noOfStudents(vector<int> &arr, int k, int limit) {
        int students=1, pages=0, n=arr.size();
        for (int i=0; i<n; i++) {
            if (pages + arr[i] <= limit) pages += arr[i];
            else {
                students++;
                pages = arr[i];
            }
        }
        return students;
    }
    int findPages(vector<int> &arr, int k) {
        int n=arr.size();
        if (k > n) return -1;
        int low = *max_element(arr.begin(),arr.end());
        int high = accumulate(arr.begin(),arr.end(),0);
        while (low <= high) {
            int mid = (low + high) / 2;
            if (noOfStudents(arr,k,mid) <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};