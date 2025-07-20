// GFG - Rotate Array Clockwise
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n=arr.size();
        if (k>n) k=k%n;
        reverse(arr.begin()+(n-k), arr.end());
        reverse(arr.begin(),arr.begin()+(n-k));
        reverse(arr.begin(),arr.end());
    }
};
