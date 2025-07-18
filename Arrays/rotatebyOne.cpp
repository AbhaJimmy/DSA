// GFG - Rotate array by one position in clockwise direction
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void rotate(vector<int> &arr) {
        int n=arr.size(), temp = arr[n-1];
        for (int i=n-1; i>0; i--) {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
    }
};