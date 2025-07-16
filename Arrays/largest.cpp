// GFG - Largest Element in Array
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int largest(vector<int> &arr) {
        int n=arr.size(), largest=arr[0];
        for (int i=1; i<n; i++) {
            if (arr[i] > largest) largest = arr[i];
        }
        return largest;
    }
};