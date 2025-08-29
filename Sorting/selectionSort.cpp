// GFG - Selection Sort
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void selectionSort(vector<int> &arr) {
        int n=arr.size(), mini;
        for (int i=0; i<n-1; i++) {
            mini=i;
            for (int j=i; j<n; j++) {
                if (arr[j] < arr[mini]) mini = j;
            }
            swap(arr[i],arr[mini]);
        }
    }
};