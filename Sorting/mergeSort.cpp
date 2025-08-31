// GFG - Merge Sort
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r) {
        int left=l, right=mid+1;
        vector<int> temp;
        while (left<=mid && right<=r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i=l; i<=r; i++) {
            arr[i] = temp[i-l];
        }
    }
    void mainMS(vector<int>& arr, int l, int r) {
        if (l >= r) return;
        int mid = (l+r)/2;
        mainMS(arr,l,mid);
        mainMS(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        int n=arr.size();
        mainMS(arr,0,n-1);
    }
    
};