// GFG - Quick Sort
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int partitionInd = partition(arr,low,high);
            quickSort(arr,low,partitionInd-1);
            quickSort(arr,partitionInd+1,high);
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high], i=low, j=high-1;
        while (i <= j) {
            while (arr[i]<=pivot && i<=high-1) {
                i++;
            }
            while(arr[j]>pivot && j>=low) {
                j--;
            }
            if (i < j) swap(arr[i],arr[j]);
        }
        swap(arr[high],arr[i]);
        return i;
    }
};