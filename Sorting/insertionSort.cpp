// GFG - Insertion Sort
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void insertionSort(vector<int>& arr) {
        int n=arr.size(), j;
        for (int i=0; i<n; i++) {
            j=i;
            while (arr[j] < arr[j-1] && j>0) {
                swap(arr[j], arr[j-1]);
                j--;
            } 
        }
    }
};