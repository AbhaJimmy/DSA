// GFG - Second Largest
#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        int n=arr.size(), largest=arr[0], secLargest=-1;
        for (int i=0; i<n; i++) {
            if (arr[i] > largest) {
                secLargest = largest;
                largest = arr[i];
            }
            else if ((arr[i] > secLargest) && (arr[i] < largest)) secLargest=arr[i];
        }
        return secLargest;
    }
};
